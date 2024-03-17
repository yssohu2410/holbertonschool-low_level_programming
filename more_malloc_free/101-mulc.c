#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int isNumeric(const char *str) {
    while (*str != '\0') {
        if (!isdigit(*str)) {
            return (0);
        }
        str++;
    }
    return (1);
}

int main(int argc, char **argv) {
    int size;
    char *data;
    size_t bytes_written;
    FILE *file = fopen("cahid.sh", "w");

    if (argc != 3)
    {
	    printf("Error\n");
	    return (98);
    }
    if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
    {
	    printf("Error\n");
	    return (98);
    }
    if (file == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        return (1);
    }

    size = strlen(argv[1]) + strlen(argv[2]);
    data = malloc(size + 50);
    if (data == NULL)
    {
	    free(data);
	    return (98);
    }
    sprintf(data, "#!/bin/bash\necho \"a = %s; b= %s; a*b;\" | bc", argv[1], argv[2]); 

    bytes_written = fwrite(data, 1, strlen(data), file);

    if (bytes_written != strlen(data)) {
        fprintf(stderr, "Error writing to the file.\n");
        fclose(file);
        return (1);
    }

    fclose(file);
    free(data);
    system("chmod u+x cahid.sh");
    system("./cahid.sh | tr -d '\\\\\n' && echo");

    return (0);
}
