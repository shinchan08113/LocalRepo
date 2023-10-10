#include<stdio.h>
#include<conio.h>
void func();
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        func();
    }
    return 0;
}
void func()
{
static int x=0;
    x=x+10;
    printf("%d\n",x);
}