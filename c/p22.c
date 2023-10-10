#include<stdio.h>
#include<conio.h>
int main()

{
    int N,d,f=0;
    printf("enter the number");
    scanf("%d",&N);
    while(N!=0)
    {
        d=N%10;
        f=f+d;
        N=N/10;
    }
    printf("%d is sum of digit",f);
    return 0;

}