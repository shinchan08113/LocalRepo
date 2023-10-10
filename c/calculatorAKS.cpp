#include<stdio.h>
#include<conio.h>
int main()
{int a,b,add,subtract,multiply,division,operation;
printf("enter first number\n");
scanf("\n %d",&a);
printf("enter second number\n");
scanf("\n %d",&b);
add=a+b;
subtract=a-b;
multiply=a*b;
division=a/b;
printf("enter operation\n");
scanf("\n %d",&operation);
switch (operation)
{
case 1:
printf("addition=%d\n",add);
break;
case 2:
printf("subtract=%d\n",subtract);
break;
case 3:
printf("multiply=%d\n",multiply);
break;
case 4:
printf("division=%d\n",division);
break;
default:
printf("Invalid operation \n");
}
printf("CONGRATS YOU GOT IT !!!\n");
getch();
return 0;
}

