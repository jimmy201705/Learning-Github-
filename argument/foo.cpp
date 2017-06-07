#include<stdio.h>

int foo(int argc, char** argv)
{
    int i;
    for (i=0; i<argc; i++)
        printf("argument %d is %s.\n", i, argv[i]);
    return 0;
}

/*
parameter与argument的区别
void foo(int n)
{
}
那么n就是parameter.

而调用函数时：foo(20) or foo(x) 这时20和x就是argument.
*/
