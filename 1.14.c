/*1.14. Write a program to input name of a person and print first four character only*/
#include<stdio.h>
int main(){
  char a[30];
  printf("Enter your name : ");
  scanf("%4s",&a);
  printf("Name with four character=%s",a);
}
/*
OUTPUT
Enter your name : amansingh
Name with four character=aman*/
