/*1.13. Write a program to input data of a student like rollno (int), name (string with space),
 gender (char), email (string without space), mobile(string without space),
course (string with space) and show the output.*/
#include<stdio.h>
#include<string.h>
int main(){
  int rollno;
  char name[50],gender,email[50],mobile[15],course[30];
  printf("Enter rollno : ");scanf("%d",&rollno);
  printf("Enter name : ");fflush(stdin);gets(name);
  printf("Enter gender : ");fflush(stdin);
  gender=getchar();
  printf("Enter email : ");scanf("%s",&email);
  printf("Enter mobile no. : ");scanf("%s",&mobile);
  printf("Enter Course : ");fflush(stdin);gets(course);fflush(stdin);
  printf("%d %s %c %s %s %s",rollno,name,gender,email,mobile,course);
}
/*
OUTPUT
Enter rollno : 21
Enter name : Aman Singh
Enter gender : M
Enter email : aman@gmail.com
Enter mobile no. : +91 555555
Enter Course : B.tech ece
21 Aman Singh M aman@gmail.com +91 555555 B.tech ece*/
