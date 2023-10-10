#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int N,i,j,F=1;
    float x,S=0;
    printf("enter no. of terms\n");
    scanf("%d",&N);
    printf("enter the value of x\n");
    scanf("%f",&x);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            F=F*j;
        }
        S=S+pow(x,i)/F;
        F=1;
    }
    printf("%f is sum of series",S);
}