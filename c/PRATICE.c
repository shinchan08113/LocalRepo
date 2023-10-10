#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,L;
    printf("enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    L=a;
    if(b>L)
    {
        L=b;
    }
    if(c>L)
    {
        L=c;
    }
    printf("%d is largest no",L);
    return 0;
}