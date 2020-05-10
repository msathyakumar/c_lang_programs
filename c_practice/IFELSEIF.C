#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the value of a ");
scanf("%d",&a);
if(a<=10)
printf("\n a is less than 10");
else if (10<a<20)
printf("\n a is b\w 10 and 20");
else
printf("\n a is greater than 20 or <-1");
getch();
}