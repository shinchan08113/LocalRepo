#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float D,deno,root1,root2;
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    D=b^2-(4*a*c);
    deno=2*a;
    if (D>0)
    {
        printf("real roots\n");
        root1=(-b+sqrt(D))/deno;
        root2=(-b-sqrt(D))/deno;
        printf("ROOT1=%f,ROOT2=%f",root1,root2);
    }
    else if(D==0)
    {
        printf("equal roots\n");
        root1=-b/deno;
        printf("%f,%f",root1,root2);    
    }
    else 
    printf("imagnary roots\n");
    getch();
}



