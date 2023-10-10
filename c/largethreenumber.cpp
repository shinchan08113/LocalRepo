#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,large;
    printf("enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    large=a;
    if(b>large)
    {
      large=b;
    }
    if(c>large)
    {
        large=c;
    }
    printf("%d is large",large);
}