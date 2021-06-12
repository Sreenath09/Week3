/*TO READ 3 NUMBERS AND READ ITS AVERAGE USING FUNCTIONS*/
#include<stdio.h>

int avg(float a,float b,float c)
{
    float avg;
avg=(a+b+c)/3;
    return avg;
}



void main()
{
    float a,b,c;
    float result;

    printf("Enter first number :");
scanf("%f",&a);
    printf("Enter second number :");
scanf("%f",&b);
    printf("Enter third number :");
scanf("%f",&c);
    result=(a,b,c);

    printf("\nAverage is = %f",result);
}
