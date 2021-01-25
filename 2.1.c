//2.1: Write a program to input a number and check it to be even or odd using if statement.
#include<stdio.h>
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  if(n%2)
    printf("%d is Odd",n);
  else
    printf("%d is Even",n);
}
/*
OUTPUT
Enter the number : 5
5 is Odd*/

/*#include<stdio.h>
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  n%2?printf("%d is Odd",n):printf("%d is Even",n);
}*/
