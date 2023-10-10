#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        printf("%d",i);
        c=0;
    }
}