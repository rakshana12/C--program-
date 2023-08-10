#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
{
printf(" vowel");
}
else if((ch <= 'a'&& ch >= 'z' || ch <='A' && ch >= 'Z'))
{
printf("consonant");
}
else
printf("not an alphabhet");
}