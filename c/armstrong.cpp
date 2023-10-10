#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int N,C=0,num,d,s=0,N1;
    printf("enter number\n");
    scanf("%d");
    num=N;
    while(N!=0)
    {
        N=N/10;
        C=C+1;
    }
    N1=num;
    while(num!=0)
    {
        d=num%10;
        s=s+pow(d,C);
        num=num/10;
    }
    if(s==N1)
    printf("\nno. is armstrong");
    else
    printf("\nno. is not armstrong");
    return 0;
}