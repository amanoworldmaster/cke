//2.7: Write a program to input numbers from user till 0 is pressed and check every given number to be even or odd.
#include<stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  do{
    n%2?printf("Odd\n"):printf("Even\n");
    scanf("%d",&n);
  }while(n!=0);
}
/*
OUTPUT
Enter a number: 5
Odd
8
Even
50
Even
67
Odd
0*/
