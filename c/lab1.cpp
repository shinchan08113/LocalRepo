#include<stdio.h>
#include<conio.h>
int linearsearch(int[],int,int);
main ()
{
    int a[20],i,n,p,key;
    
    
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the elements to be search\n");
    scanf("%d",&key);
    p=linearsearch(a,n,key);
    if(p==-1)
    printf("the search is unsucessful please input valid number");
    else
    printf("%d is found at location %d",key,p);
    return 0;
}
int linearsearch(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        return (i);
    }
    return (-1);
}