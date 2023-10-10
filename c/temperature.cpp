#include<stdio.h>
#include<conio.h>
int main()
{
    float celsius,fahrenheit;
    printf("enter the value of fahrenheit\n");
    scanf("%f",&fahrenheit);
    celsius=(0.56)*(fahrenheit-32);
    printf("temperature in celsius is %f",celsius);
    return 0;
}