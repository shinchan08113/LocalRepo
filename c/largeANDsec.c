#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int a[10],n,large=0,seclarge=0;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter elements in 1D array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];
    seclarge=a[0];
    for(i=1;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }
    for(i=1;i<n;i++)
    {
        if(seclarge<a[i]&&a[i]!=large)
        {
            seclarge=a[i];
        }
    }
    printf("large=%d,seclarge=%d",large,seclarge);
}