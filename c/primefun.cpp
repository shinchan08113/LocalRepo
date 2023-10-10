#include<stdio.h>
int prime(int);
int main()
{
    int num,k;
    printf("enter the number\n");
    scanf("%d",&num);
    k=prime(num);
    if(k==2)
    printf("number is prime");
    else
    printf("number is not prime");
}
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    return c;
}
