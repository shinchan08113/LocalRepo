#include<stdio.h>
int main()
{
    int N,i=0,c=0;
    printf("enter shinchan t-shirt no.\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            c++;
        }
    }
    if (c==2)
    printf("shinchan t-shirt no. is prime\n");
    else
    printf("shinchan t-shirt no. is not prime\n");
}