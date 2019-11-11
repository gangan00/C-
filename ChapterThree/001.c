#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
/*
p = (1+r)^n
*/
double p,r,n;
r = 0.1;
n=5;
p = pow(1+r,n);
printf("%g",p);
system("pause");
return 0;
}