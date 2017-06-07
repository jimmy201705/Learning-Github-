#include<stdio.h>

int foo(int argc, char** argv)
{
    int i;
    for (i=0; i<argc; i++)
        printf("argument %d is %s.\n", i, argv[i]);
    return 0;
}

