#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("*\n");
        if(i==3)
        break;
    }
    return 0;
}