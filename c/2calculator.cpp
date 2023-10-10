#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,result;
    char ch;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    fflush(stdin);
    printf("choose the operation that your loved ones say to perform opertion\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case'+':
        result=a+b;
        printf("%d",result);
        break;
        case'-':
        result=a-b;
        printf("%d",result);
        break;
        case'*':
        result=a*b;
        printf("%d",result);
        break;
        case'/':
        result=a/b;
        printf("%d",result);
        break;
        default:
        printf("i love shinchan");
        }
        return 0;
        }

    

