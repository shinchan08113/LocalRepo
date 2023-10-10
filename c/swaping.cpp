#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("a=%d,b=%d",a,b );
    printf("\nand say thankyou ishu");
    return 0;
}