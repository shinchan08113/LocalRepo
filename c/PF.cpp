#include<stdio.h>
#include<conio.h>
int sumdigit(int);
int main()
{
    int n,d;
    printf("enter the number\n");
    scanf("%d",&n);
    d=sumdigit(n);
    printf("%d is sum of digit",d);
    return 0;
}
int sumdigit(int n)
{
    int s=0,rem;
    while(n!=0)
    {
        rem=n%10;
        s=s+rem;
        n=n/10;
    }
    return s;
}