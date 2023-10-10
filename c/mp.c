#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[10],i,n,sum=0;
    printf("enter no of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter marks of students %d",i);
    scanf("%d,&marks[i]");
    sum=sum+marks[i];
    }
printf("sum=%d",sum);
}
