#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,small;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    small=a>b?b:a;
    printf("small=%d",small);
    return 0;
}