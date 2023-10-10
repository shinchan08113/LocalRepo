#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,result;
    char ch;
    printf("enter the two number\n");
    scanf("%d",&a);
    if(result<10)
    {
        printf("you are child");
    }
    else if(result>10&&result<30)
    {
        printf("you are responsible");
    }
    else if(result>30)
    {
        printf("you are responsible person");
    }
    return 0;
    
}