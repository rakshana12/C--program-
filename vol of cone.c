#include<stdio.h>
void main()
{
 double pi=3.14,radius,height,volume;
 printf("enter the radius and height");
 scanf("%lf %lf",&radius,&height);
 volume=(pi*radius*radius*height)*1/3;
 printf("%lf",volume);
}