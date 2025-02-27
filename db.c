#include <stdio.h>
int main()
{
    int n,power=2,answer=1;
    printf("enter the number:");
   scanf("%d",&n);
    while(power>0)
    {
        answer=answer*n;
        power--;
    }
    printf("%d",answer);
    return 0;
}