#include<stdio.h>
int main()
{
    int a=5,b=6,c;
    c=(++a,b=b+a);
    printf("a=%d,b=%d,c=%d",a,b,c);
    return 0;
}