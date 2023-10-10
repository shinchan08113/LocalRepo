#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while(i<=5)
    {
        printf("hello\n");
        if(i==3)
        continue;
        i++;
    }
    return 0;
}