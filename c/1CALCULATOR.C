#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,result;
    char ch;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    fflush(stdin);
    printf("enter the operation\n");
    scanf("%c",&ch);
    if(ch=='+')
    {
        result=a+b;
        printf("%d",result);
    }
    else
    if(ch=='-')
    {
        result=a-b;
        printf("%d",result);
    }
    else
    if(ch=='*')
    {
        result=a*b;
        printf("%d",result);
    }
    else
    if(ch=='/')
    {
        result=a/b;
        printf("%d",result);
    }
    else
    {
        printf("SAY i love shinchan");
    }
    return 0;
}