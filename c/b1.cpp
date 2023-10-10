#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
            if(i==3)
            break;
        }
        printf("\n");
    }
    return 0;
    }