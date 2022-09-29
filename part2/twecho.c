#include "twecho.h" // header file
#include <stdio.h> // for perror()
#include <stdlib.h> // for malloc() and free()
#include <ctype.h> // for toupper()
#include <string.h> // for strlen()

char** duplicateArgs(int argc, char** argv){
	char** array=(char **)malloc((argc+1)*sizeof(char *)); 

	int b;

	for (b=0; b<argc; b++){
		int d = 1 + strlen(argv[b]); 
		array[b]= (char*) malloc(d*sizeof(char));
		int f; 
		for(f=0; f<d; f++){
			array[b][f]= toupper(argv[b][f]);
		}
	}
	array[argc] = NULL;

	return array;
}

void freeDuplicatedArgs(char** copy){
    int g=0; 
 
	while(copy[g] != 0){
		free(copy[g]); 
		g++; 
	}
	free(copy); 
}