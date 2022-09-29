#include "twecho.h" // header file
#include <stdio.h> // for perror()
#include <stdlib.h> // for malloc() and free()
#include <ctype.h> // for toupper()
#include <string.h> // for strlen()

char** duplicateArgs(int argc, char **argv)
{
    char **array;
    int i;

    array = (char **)malloc((argc + 1) * sizeof(char *));
    if (array == NULL) {
        perror("malloc returned NULL");
        exit(1);
    }

    for (i = 0; i < argc; i++) {
        array[i] = (char *)malloc(strlen(argv[i]) + 1);
        if (array == NULL) {
            perror("malloc returned NULL");
            exit(1);
        }

        char *t = array[i];
        char *s = argv[i];
        while ((*t++ = toupper(*s++)) != 0);
    }

    array[argc] = NULL;

    return array;
}

void freeDuplicatedArgs(char** copy){
    int i=0; 
 
	while(copy[i] != 0){
		free(copy[i]); 
		i++; 
	}
	free(copy); 
}
