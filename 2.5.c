//2.5: Write a program to input two numbers and print all even numbers in given range.
#include<stdio.h>
int main(){
  int fn,ln,i;
  printf("Enter two number : ");
  scanf("%d%d",&fn,&ln);
  if(fn>ln)
    ln=(fn+ln)-(fn=ln);
  printf("Even number : ");
  for(i=fn;i<=ln;i++){
    if(i%2==0)
      printf("%d ",i);
  }
}
/*
OUTPUT
Enter two number : 70
58
Even number : 58 60 62 64 66 68 70*/
