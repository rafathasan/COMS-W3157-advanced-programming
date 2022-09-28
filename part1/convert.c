#include <stdio.h>  // for printf()
#include <stdlib.h> // for atoi()

char *convertToBinary(int x){
    int bits = 32;
    int spaces = (bits / 4) -1;
    int total_size = bits + spaces + 1;
    char* binary = (char*)malloc(total_size*sizeof(char));
    
    int k = 0;
    for(unsigned i = (1 << 31); i > 0; i = i/2){
        if((k+1)%5 == 0){
            binary[k++] = ' ';
        }
        if(i & x){
            binary[k++] = '1';
        }else{
            binary[k++] = '0';
        }
    }

    binary[total_size-1] = '\0';
    
    return binary;
}

int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("Error: no argument specified.\n");
        return 1;
    }

    int x = atoi(argv[1]); // Parse the first argument as an int

    printf("signed dec:   %d\n", x);
    printf("unsigned dec: %u\n", x);
    printf("hex:          %x\n", x);
    char* bin = convertToBinary(x);
    printf("binary:       %s\n", bin);
    free(bin);

    // int k = 0;
    // for(unsigned i = (1 << 31); i > 0; i = i/2){
    //     if((k % 4) == 0){
    //             printf(" ");
    //     }
    //     if((x & i) == 0){
    //             printf("0");
    //     }else{
    //             printf("1");
    //     }
    //     k++;
    // }
    // printf("\n");
    return 0;
}