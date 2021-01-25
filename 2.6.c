//2.6: Write a program to create an array of 10 integers, input the data and show all even numbers in given numbers.
#include<stdio.h>
int main(){
  int a[10],i;
  printf("Enter the 10 number : ");
  for(i=0;i<10;i++)
    scanf("%d",&a[i]);
  printf("Even array are : ");
  for(i=0;i<10;i++){
    if(a[i]%2==0)
      printf("%d ",a[i]);
  }
}
/*
OUTPUT
Enter the 10 number : 90
5
76
8
55
43
17
88
52
60
Even array are : 90 76 8 88 52 60*/
