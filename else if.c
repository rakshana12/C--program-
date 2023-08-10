#include<stdio.h>
void main()
{
    double num;
	printf("enter the num");
	scanf("%lf",&num);
  if(num>=95)
{
  printf("%lf destinction ",num);
}
else if(num<80 && num>=60)
  printf("%lf first class",num);
else if(num<60 && num>=40)
  printf("%lf second class",num);
else
  printf("%lf  fail",num);
}

