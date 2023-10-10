#include<stdio.h>
int multiply(int,int);
int main()
{
    int a,b;
    printf("enter the two number\n");
    scanf("%d%d",&a,&b);
    printf("%d*%d=%d",a,b,multiply(a,b));
    return 0;
}
int multiply(int x,int y)
{
    return(x*y);
}