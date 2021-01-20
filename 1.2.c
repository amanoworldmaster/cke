/*1.2. Write a program to input a floating number and show without decimal point*/
#include<stdio.h>
int main(){
float a;
printf("Enter a float number : ");
scanf("%f",&a);
printf("Float number with zero decimal points is  =%.0f",a);
}
/*
OUTPUT
Enter a float number : 456.2342
Float number with two decimal points is  =456*/
