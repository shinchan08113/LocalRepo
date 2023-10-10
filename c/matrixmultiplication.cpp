#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][20],b[20][20],s[20][20];
    int r1,r2,c1,c2,i,j,k;
    printf("enter order of matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter order of 2matrix\n");
    scanf("%d%d",&r2,&c2);
    if(r2!=c1)
    {
        printf("matrix multiplication is not possible");
    }
    else
    {
        printf("enter elements in 1st matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter elements in 2nd matrix\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                s[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    s[i][j]=s[i][j]+a[i][j]*b[k][j];
                }

            }
                    
                    }
                    printf("resultant matrix\n");
                    for(i=0;i<r1;i++)
                    {
                        for(j=0;j<c2;j++)
                        {
                            printf("%d",s[i][j]);
                        }
                        printf("\n");
                    }
    }
}