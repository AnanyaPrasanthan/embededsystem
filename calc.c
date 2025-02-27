#include <stdio.h>
int add(int a1,int b1){
    int result=a1+b1;
    printf("the sum of %d and %d is %d",a1,b1,result);
}
int sub(int a1,int b1){
    int result=a1-b1;
    printf("the diff of %d and %d is %d",a1,b1,result);
}
int mul(int a1,int b1){
    int result=a1*b1;
    printf("the product of %d and %d is %d",a1,b1,result);
}
int div(int a1,int b1){
    int result=a1/b1;
    printf("the div of %d and %d is %d",a1,b1,result);
}

int main()
{
    int a,b,result,choice;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a number");
    scanf("%d",&b);
    printf("the choices are:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        add(a,b);
        break;
    case 2:
        sub(a,b);
        break;
    case 3:
        mul(a,b);
        break;
    case 4:
       div(a,b);
        break;
    default:
        printf("the value is not a number");
        break;
    }
}