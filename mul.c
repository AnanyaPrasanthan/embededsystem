#include<stdio.h>
void add (int a, int b); //function declaration
int main()
{
    int result= add (10,20); //function call
    printf("result=%d",result);
    return 0;
}

    void add (int a, int b) // function  definition
    {
    int c=a+b;
    return c;
    }