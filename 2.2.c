//2.2: Write a program to input a number and check it to be even or odd using switch statement.
#include<stdio.h>
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  switch(n%2){
    case 0:printf("%d is Even",n); break;;
    default :printf("%d is odd",n);
  }
}
/*
OUTPUT
Enter the number : 6
6 is Even*/
