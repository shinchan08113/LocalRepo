#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("enter the no. of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");

        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");

    }
    return 0;
}