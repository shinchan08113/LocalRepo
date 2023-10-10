#include<stdio.h>
#include<conio.h>
void factorial(int);
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    factorial(n);
}
void factorial(int n)
{
    int f=1,i;
    if(n==0)
    printf("%d is factorial",f);
    else
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        printf("%d is factorial",f);
    }
}
