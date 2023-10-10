#include<stdio.h>
#include<conio.h>
void swap(int x,int y)
{
   int temp=x;
   x=y;
   y=temp;
}
void selectionsort(int a[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        if(a[j]<a[min])
        min=j;
        swap(a[min],a[i]); 
    }
}