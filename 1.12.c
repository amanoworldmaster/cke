/*1.12. Write a program to input date in any given format like dd mm yyyy, dd-mm-yyyy, dd/mm/yyyy format
and show that date in dd-mmm-yyyy format*/
#include<stdio.h>
int main(){
int d,m,y;
  printf("Enter date in format dd mm yyyy : ");
  scanf("%2d %2d %4d",&d,&m,&y);
  printf("dd mm yyyy in dd-mm-yyyy format=%02d-%02d-%04d dd/mm/yyyy format=%02d/%02d/%04d dd-mmm-yyyy format=%02d-%03d-%04d",d,m,y,d,m,y,d,m,y);
}
/*
OUTPUT
Enter date in format dd mm yyyy : 20 01 2021
dd mm yyyy in dd-mm-yyyy format=20-01-2021 dd/mm/yyyy format=20/01/2021 dd-mmm-yyyy format=20-001-2021*/
