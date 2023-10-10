#include<stdio.h>
#include<conio.h>
int main()
{
    int n10,n5,n2,n1,total;
    printf("total no. of 10 rupees coins\n");
    scanf("%d",&n10);
    printf("total no. of 5 rupees coins\n");
    scanf("%d",&n5);
    printf("total no. of 2 rupees coins\n");
    scanf("%d",&n2);
    printf("total no. of 1 rupees coins\n");
    scanf("%d",&n1);
    total=(n10*10)+(n5*5)+(n2*2)+(n1*1);
    printf("your total money=%d",total);
    return 0;    
    }