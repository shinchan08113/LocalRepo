#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the no.\n");
    scanf("%d",&n);
    if(n%2==0)
    goto even;
    else
    goto odd;
    even:
    printf("number is even");
    goto end;
    odd:
    printf("number is odd");
    goto end;
    end:
    printf("\n");
    return 0;
}