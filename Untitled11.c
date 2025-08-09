/* comline.c */
/* demonstrates command line arguments */
#include <stdio.h>

int main(argc, argv) int argc;
char *argv[];
{
    int j;
    printf("Number of arguments is %d\n", argc);
    for (j = 0; j < argc; j++)
        printf("Argument number %2d is %s\n", j, *(argv + j));
}

// code run