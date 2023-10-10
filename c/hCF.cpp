#include<conio.h>
#include<stdio.h>
int main()
{
    int a,b;
    int dividend,rem,divisor;
    printf("enter the value of a,b\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        dividend=a;
        divisor=b;
    }
    else
    {
        dividend=b;
        divisor=a;
    }
    while(divisor!=0)
    {
        rem=dividend%divisor;
        dividend=divisor;
        divisor=rem;
    }
    printf("%d is hcf",dividend);
    return 0;
}