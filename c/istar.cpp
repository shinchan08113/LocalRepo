#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k=1;
    printf("enter the no. of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k=k+1;
        }
        printf("\n");
    }
    return 0;
}