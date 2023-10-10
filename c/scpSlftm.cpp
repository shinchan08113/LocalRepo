#include<stdio.h>
#include<conio.h>
int z=5;
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
    int x=0;
    x=x+10;
    z=z+10;
 printf("x=%d\n",x);
 printf("z=%d\n",z);   
}

