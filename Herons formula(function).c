/*To find the area of a triangle given its sides as input using
functions*/
#include<math.h>
#include<stdio.h>
float area(float a,float b,float c)
{
    float Ar,S;
    S=(a+b+c)/2;
    Ar=sqrt(S*(S-a)*(S-b)*(S-c));
 return (Ar) ;
}

void main()
{
    float a,b,c,S,A;
    printf("Length of 1st side\n");
    scanf("%f",&a);
    printf("Length of 2nd side\n");
    scanf("%f",&b);
    printf("Length of 3rd side\n");
    scanf("%f",&c);
  A=area(a,b,c);
  printf("\nThe area of triangle using Heron's formula:%02f\n",A);
}
