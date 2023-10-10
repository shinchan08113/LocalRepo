#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,n,pos,x;
    printf("enter the no of elements in array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the pos where the elements to be inserted\n");
    scanf("%d",&pos);
    printf("enter the value at that postion\n");
    scanf("%d",&x);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
        
        a[pos-1]=x;
        n++;
        
    }
    printf("final array after inserting the value is\n");
    for(i=0;i<=n;i++)
    printf("%d  ",a[i]);
    return 0;


}