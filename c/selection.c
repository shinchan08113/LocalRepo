#include<stdio.h>
int main()
{
    int a[20],i,j,temp,pos,n,p;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    printf("enter the elements in array\n");
    for(p=0;p<n;p++)
    {
        scanf("%d",&a[p]);
    }
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
            pos=j;
        }
        if(pos!=i)
        {
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
        }
    }
    printf("sorted array :\n");
    for(i=0;i<n;i++)
    
    printf(" %d ",a[i]);
    return 0;
} 