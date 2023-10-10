#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],x,n,i,beg,mid,end,found=0;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements to be searched\n");
    scanf("%d",&x);
    beg=0;
    end=n-1;
    mid=(end+beg)/2;
    
    while(beg<=end)
    {
        if(a[mid]<x)
        beg=mid+1;
        else if(a[mid]==x)
        {
            printf("%d found at location %d\n",x,mid+1);
            break;
        }
    else
    end=mid-1;
    
    }
    if(beg>end)
    printf("not found\n");
    return 0;
} 