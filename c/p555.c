#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,result;
    char ch;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("enter the choice opertaion");
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
    if(ch=='/')
    {
        result=a/b;
        printf("%d",result);
    }
    else
    if(ch=='*')
    {
        result=a*b;
        printf("%d",result);
    }
    else
    {
        printf("shinchan is my favourite");
    }
return 0;
}
