#include<stdio.h>
int f(int a)
{
    (a>20)? return(10): return(20);
}// should not use return in ternery operator
int main(){
    int f(int);
    int b;
    b=f(20);
    printf("%d\n",b);
    return 0;
}
