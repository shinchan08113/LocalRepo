/*calculation of salary*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int yos,qual,sal=0;
    char g;
    printf("enter gender,years of service and qualifications(0=g,1=PG)");
    scanf("%c%d%d",&g,&yos,&qual);
    if(g=='m'&&yos>=10&&qual==1)
    sal=15000;
    else if((g=='m'&&yos>=10&&qual==0)||(g=='m&&yos<10&&qual==1'))
    sal=10000;
    else if(g=='m'&&yos<10&&qual==0)
    sal=7000;
    else if(g=='f'&&yos>=10&&qual==1)
    sal=12000;
    else if(g=='f'&&yos>=10&&qual==0)
    sal=9000;
    else if(g=='f'&&yos<10&&qual==1)
    sal=10000;
    else if(g=='f'&&yos<10&&qual==0)
    sal==6000;
    printf("\nsalary of employee=%d\n",sal);
    return 0;
}