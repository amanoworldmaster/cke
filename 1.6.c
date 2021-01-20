/*1.6. Write a program to input a hexa decimal number and print into decimal, octal and hexa decimal*/
#include<stdio.h>
int main(){
int a;
printf("Enter a hexa decimal number : ");
scanf("%x",&a);
printf("%x  in decimal=%d in octal=%o and in hexa decimal=%x",a,a,a,a);
}
/*
OUTPUT
Enter a hexa decimal number : 20
20  in decimal=32 in octal=40 and in hexa decimal=20*/
