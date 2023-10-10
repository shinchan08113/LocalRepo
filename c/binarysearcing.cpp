#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,n,beg,end,mid,item,found=0;
    printf("enter value of n and item to be search\n");
    scanf("%d%d",&n,&item);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(item==a[mid])
        {
            found=1;
            printf("%d item found at %d pos\n",item,mid+1);
            break;
        }
        if(item<a[mid])
        end=mid-1;
        if(item>a[mid])
        beg=mid+1;
        mid=(beg+end)/2;
    }
    if(found==0)
    {
        printf("search unsucessful");
    }
}