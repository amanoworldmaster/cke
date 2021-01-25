/*2.9: Write a program having a function iseven() which takes a number as input and
 returns 1 if the number is even else returns 0. Create the main() function  to input a
 number and check it to be even or odd using iseven() function.*/
#include<stdio.h>
int iseven(int n);//function decleration
int main(){
int d,k;
printf("Enter the number : ");
scanf("%d",&k);
d=iseven(k);    //function call
d?printf("%d is Even",k):printf("%d is Odd",k);
}
//function defination
int iseven(int n){
  if(n%2==0)
    return 1;
  else
    return 0;
}
/*
OUTPUT
Enter the number : 789
789 is Odd*/
