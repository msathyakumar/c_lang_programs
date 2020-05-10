#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the value of a ");
scanf("%d",&a);
if(a<=10)
{
printf("\nthe value of a is lessthan 10 and value is %d",a);
}
else
printf("\nthe value is greater than 10 and value is %d",a);
getch();
}