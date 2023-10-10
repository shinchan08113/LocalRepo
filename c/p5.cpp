#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float deno,root1,root2,d,roots;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=b^2-(4*a*c);
    deno=2*a;
    if(d>0)
    {
        printf("real roots");
        root1=(-b+sqrt(d))/deno;
        root2=(-b-sqrt(d))/deno;
        printf("root1=%f,root2=%f",root1,root2);
    }
    else if(d==0)
    {
        printf("roots are equal");
        roots=(-b/deno);
        printf("roots are %f",roots);
    }
    else
    printf("roots are imagnery");
    getch();
    }