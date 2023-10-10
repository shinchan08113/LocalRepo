#include<conio.h>
#include<stdio.h>
int main()
{
    int a[20],n,i,beg,end,mid,item,found=0;
    printf("enter the no of elements and item to be search\n");
    scanf("%d%d",&n,&item);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    printf("enter the elements\n");
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
