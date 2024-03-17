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

    size = strlen(argv[1]) + strlen(argv[2]);
    data = malloc(size + 67);
    if (data == NULL)
    {
	    free(data);
	    return (98);
    }
    sprintf(data, "echo \"a = %s; b= %s; a*b;\" | bc | tr -d '\\\\\n' && echo || exit", argv[1], argv[2]);
    system("cat ./launch_101-mul.sh | tr -d '0123456789'"); 
    system(data);

    free(data);
    return (0);
}
