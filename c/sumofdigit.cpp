#include<stdio.h>
#include<conio.h>
int main()
{
    int N,d,sum=0;
    printf("enter shinchan favourite number\n");
    scanf("%d",&N);
    while(N!=0)
    {
        d=N%10;
        sum=sum+d;
        N=N/10;
    }
    printf("%d is shinchan favourite number\n",sum);
    return 0;
}