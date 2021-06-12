/*TO CONVERT TIME INTO MINUTES*/
#include<stdio.h>

int convert(int hours,int minutes)
{
   int in_terms_of_minutes,total_minutes;
in_terms_of_minutes=hours*60;
total_minutes=in_terms_of_minutes+minutes;
printf("\n%d hours:%d minutes = %d minutes",hours,minutes,total_minutes);
return 0;
}

void main()
{
int hours,minutes,in_terms_of_minutes,time;
printf("\n Please enter hours : minutes\n");
scanf("%d:%d",&hours,&minutes);
time=convert(hours,minutes);
printf("The time in terms of minutes \n",time);
}
