/*1.10. Write a program to input date in ddmmyyyy format and print as dd/mm/yyyy format*/
#include<stdio.h>
int main(){
int d,m,y;
  printf("Enter date in format ddmmyyyy : ");
  scanf("%2d%2d%4d",&d,&m,&y);
  printf("ddmmyyyy in dd/mm/yyyy format=%02d/%02d/%04d",d,m,y);
}
/*
OUTPUT
Enter date in format ddmmyyyy : 20022021
ddmmyyyy in dd/mm/yyyy format=20/02/2021*/
