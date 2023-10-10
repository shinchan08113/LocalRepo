#include<stdio.h>
#include<conio.h>
int main()
{
    int a,*p;
    printf("enter a integer\n");
    scanf("%d",&a);
    p=&a;
    printf("a=%d",*p);
    return 0;
}