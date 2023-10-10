#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,large;
    printf("enter value of 2 number\n");
    scanf("%d%d",&a,&b);
    large=a>b?a:b;
    printf("large=%d",large);
    return 0;
}