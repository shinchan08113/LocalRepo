#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
    int n,k;
    printf("enter the no.\n");
    scanf("%d",&n);
    k=fact(n);
    printf("%d is a factorial of no. %d",k,n);
    return 0;
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return(n*fact(n-1));
}