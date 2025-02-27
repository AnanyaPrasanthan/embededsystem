#include<stdio.h>
int add(); //function definition
int main()
{
    int result=add(); //function call
    printf("result=%d",result);
    return 0;
}
int add()
{
    int a=10,b=20; // function declaration
    int c=a+b;
    return c;
}