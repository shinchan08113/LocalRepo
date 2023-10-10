#include<stdio.h>
int main()
{
    int n,S1=0,S2=0,i;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        S1=S1+i;
        else
        S2=S2+i;
    }
    printf("%d is sum of even number\n",S1);
    printf("%d is sum of odd number\n",S2);
    return 0;
}