#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the first number to be swapped:");
scanf("%d",&a);
printf("\nEnter the second number to be swapped:");
scanf("%d",&b);
printf("\nBefore swapping \nthe value of first number is a=%d and second number is b=%d",a,b);
a = a+b;
b = a-b;
a = a-b;
printf("\nAfter swapping \nthe value of first number is a= %d and second number is b=%d",a,b);
getch();
}
