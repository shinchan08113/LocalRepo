#include<stdio.h>
#include<conio.h>
int binarysearch( int a[],int x,int low,int high);
main()

{
    int a[],low,high,mid,X;
    while(low<=high)
    mid=(low+high)/2;
    if(X==a[mid])
    {
        return(mid);
    }
    if(a[mid]<X)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
    return(-1);

}
int main(void)
{
    int [];
    int n=sizeofarray()/sizeofa[]
}