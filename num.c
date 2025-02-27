#include<stdio.h>
int main(){
    int row,coloumn;
    printf("enter a number");
    scanf("%d",&row);
    printf("enter a number");
    scanf("%d",&coloumn);
    for(int i=0; i<=row; i++)
    {
        for(int j=0; j<=coloumn; j++){
             printf("1");
        }
        printf("\n");
    }

    return 0;
}