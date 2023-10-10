#include<stdio.h>
#include<conio.h>
int main()
{
    float gs,bs,da,hra;
    printf("enter the basic salary\n");
    scanf("%f",&bs);
    if(bs<1500)
    {
        hra=10/100*bs;
        da=90/100*bs;
    }
    else
    {
        hra=500;
        da=98/100*bs;
    }
    gs=bs+hra+da;
    printf("the gross salary is %f",gs);
    return 0;
}