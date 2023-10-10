#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,x,pos=-1,n,found=0;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    printf("enter the elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements to be searched\n");
    scanf("%d",&x);
    for(i=0;i<=n;i++)
    {
        if(x==a[i])
        {
         pos=i;
         printf("%d item found at %d position",x,pos+1);
         found=1;
         break;
        }
    }
            if(found==0)
        {
         printf("search is unsucessful\n");
        }
 }