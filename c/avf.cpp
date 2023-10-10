#include<stdio.h>
int divisior(int,int);
int main()
{
    int a,b;
    printf("enter the two number\n");
    scanf("%d%d",&a,&b);
    printf("%d/%d=%d",a,b,divisior(a,b));
    return 0;
}
int divisior(int x,int y)
{
    return(x/y);
}