#include<stdio.h>
#include<conio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d before function call\n",a,b);
    swap(a,b);
    printf("a=%d,b=%d after function call",a,b);
    return 0;
}
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("swapped values of a=%d,b=%d during function call",a,b);
}