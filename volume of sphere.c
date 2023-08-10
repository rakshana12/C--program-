#include<stdio.h>
void main()
{
	double pi=3.14,radius,volume;
	printf("enter the radius");
	scanf("%lf",&radius);
	volume=4/3*pi*radius*radius*radius;
	printf("%lf",volume);
}