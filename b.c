#include <stdio.h>
int main(){
    int n, count=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
      printf("%d",n%10);
      n=n/10;
      count++;
     }
     printf("number of digits=%d",count);
     return 0;
}