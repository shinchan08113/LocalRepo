#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter the number which you have to calculate factorial\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("your fact is %d",fact);
}