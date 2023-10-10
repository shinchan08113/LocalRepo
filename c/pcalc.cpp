#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,result;
    char ch;
    printf("enter the two number\n");
    scanf("%d%d",&a,&b);
    fflush(stdin);
    printf("enter the operation\n");
    scanf("%c",&ch);
    if(ch=='+')
    {
        result=a+b;
        printf("%d is your result",result);
    }
    else
    if(ch=='-')
    {
        result=a-b;
        printf("%d is your result",result);
    }
    else
    if(ch=='*')
    {
        result=a*b;
        printf("%d is your result",result);
    }
    else
    if(ch=='/')
    {
        result=a/b;
        printf("%d is your result",result);
    }
    else
   {
     printf("i'm sorry for your result");
     }
   return 0;
    

}