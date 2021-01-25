/*2.10: Create a header file as pp010.h having a function iseven() which takes a number
as input and returns 1 if the number is even else returns 0. Write a program pp010.c, include the header file into it. Create the main() function  to input a number and check it to be even or odd using iseven() function.*/

/*WE create a file by name pp010.h
And code
int iseven(int n){
  if(n%2==0)
    return 1;
  else
    return 0;
}*/
#include<stdio.h>
#include"pp010.h"
int main(){
int d,k;
printf("Enter the number : ");
scanf("%d",&k);
d=iseven(k);    //function call
d?printf("%d is Even",k):printf("%d is Odd",k);
}
/*
OUTPUT
Enter the number : 6
6 is Even*/
