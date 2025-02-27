#include <stdio.h>
int main(){
    int n,i, sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
      printf("%d",n%10);
      i=n%10;
      n=n/10;
      
      sum+=i;
     }
     printf("the sum:%d",sum);
     return 0;
}