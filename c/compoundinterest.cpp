#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci,a,x;
    printf("enter the value of p,a,t\n");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    x=1+r/100;
    a=p*pow(x,t);
    ci=a-p;
    printf("%f is compound interest",ci);
    return 0;
}