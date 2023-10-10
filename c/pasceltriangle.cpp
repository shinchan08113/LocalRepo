#include<stdio.h>
#include<conio.h>
int main()
{
    int row,colm,n,space,no;
    printf("enter the number of rows\n");
    scanf("%d",&no);
    for(row=0;row<no;row++)
    {
        for(space=0;space<(no-row);space++)
        {
            printf("  ");
        }
        n=1;
        for(colm=0;colm<=row;colm++)
        {
            printf("%d",n);
            n=(n*(row-colm))/(colm+1);
        }
        printf("\n");
    }
}