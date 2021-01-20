/*1.3. Write a program to input a floating number and show that number in width
of 10 with two decimal point and zero fill*/
#include<stdio.h>
int main(){
float a;
printf("Enter a float number : ");
scanf("%f",&a);
printf("Float number with width of 10 digit and 2 decimal points is  =%011.02f",a);
}
/*
OUTPUT
Enter a float number : 45.76
Float number with width of 10 digit and 2 decimal points is  =00000045.76*/
