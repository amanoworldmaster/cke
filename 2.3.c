//2.3: Write a program to input a number and check it to be even or odd using bitwise operator.
#include<stdio.h>
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  if(n&1)
    printf("%d is Odd",n);
  else
    printf("%d is Even",n);
}
/*
OUTPUT
Enter the number : 76
76 is Even*/
