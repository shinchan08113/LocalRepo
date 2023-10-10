#include<stdio.h>
int main()
{
    int a[20],i,n,pos;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    printf("enter elments in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d  ",&a[i]);
    }
    printf("enter the location where you wish to delete element\n");
    scanf("%d",&pos);
    if(pos>=n+1)
    {
        printf("deletion is not possible\n");
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        a[i]=a[i+1];

    }
    printf("resultant array:\n");
    for(i=0;i<n-1;i++)
    printf("%d  ",a[i]);
    return 0;
}