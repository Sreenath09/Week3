/*TO FIND AREA OF CIRCLE USING FUNCTIONS*/
#include<stdio.h>

int area(float r)
{
  float a=3.14*r*r;
  return a;
}

void main()
{
    float r,A;
    printf("Enter the radius\n");
    scanf("%f",&r);
    A=area(r);
    printf("The area of a circle is = %f",A);


}
