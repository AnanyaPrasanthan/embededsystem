#include <stdio.h>
int calc(int n)
{
    int sum=0
    for (int i =1; i<=n; ++i)
    {
    sum+=i;
   }
    printf("sum=%d",sum);
    return sum;
}
int main() {
    int n,i,sum=0;
   printf("enter the number:");
   scanf("%d",&n);
   int result= calc(n);
    return 0;
}