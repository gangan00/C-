#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*

*/
int s;
char grade;
scanf("%d",&s);
switch (s/10)
{
case 10:
    grade='A';
    break;
case 9:
 grade='B';
 break;
case 7:
grade='C';

default:
grade = 'D';
    break;
}
printf("%c",grade);
system("pause");
return 0;
}