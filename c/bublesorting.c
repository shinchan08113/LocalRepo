#include<stdio.h>
int main()
{
    int a[20],i,j,temp,n;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array:\n");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
    return 0;
}