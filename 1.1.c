/*1.1. Write a program to input a floating number and show that number with two decimal points*/
#include<stdio.h>
int main(){
float a;
printf("Enter a float number : ");
scanf("%f",&a);
printf("Float number with two decimal points is  =%.2f",a);
}
/*
OUTPUT
Enter a float number : 45.567576
Float number with two decimal points is  =45.57*/
