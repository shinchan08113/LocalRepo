#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,add,sub,multiply,division;
    char operation;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    multiply=a*b;
    division=a/b;
    printf("enter operation\n");
    scanf("\n %c",& operation);
    switch(operation)
    {
        case '+':  
        printf("add=%d",add);
        break;
        case '-':
        printf("sub=%d",sub);
        break;
        case '*':
        printf("multiply=%d",multiply);
        break;
        case '/':
        printf("division=%d",division);
        break;
        default:
        printf("invalid operation");
    }
    getchar();
    }

