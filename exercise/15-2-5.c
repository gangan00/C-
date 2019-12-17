#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*

*/
int a=3,b=5,c=2;
a*=16+(b++)-(++c);
printf("%5d\n",a);

system("pause");
return 0;
}