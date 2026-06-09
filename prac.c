#include<stdio.h>

void gello()
{
    printf("gello");
}

void hello()
{

    gello();
    printf("hello");
}

int main()
{
    printf("main");
    hello();
}