#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,j;
    printf("enter the no. of lines\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}












