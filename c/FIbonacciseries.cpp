#include<stdio.h>
int main()
{
    int N,a=0,b=1,i,c;
    printf("enter the number\n");
    scanf("%d",&N);
    if(N==1)
    printf("%d",a);
    else
    if(N==2)
    printf("%d\+%d",a,b);
    else
    {
        printf("%d\+%d\+",a,b);
        for(i=1;i<=N-2;i++)
        {
            c=a+b;
            printf("%d\+",c);
            a=b;
            b=c;
        }
    }
    return 0;
}