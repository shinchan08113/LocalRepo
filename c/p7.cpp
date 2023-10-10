#include<stdio.h>
#include<conio.h>
int main()
{
    int row,colm,space,n,sum=0;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    for(row=0;row<n;row++)
    {
        for(space=0;space<(n-row);space++)
        {
            printf(" ");
        }
        n=1;
        for(colm=0;colm<=row;colm++)
        {
            printf("%d",sum);
            sum=(sum*(row-colm))/(colm+1);

        }
        printf("\n");
    }

}