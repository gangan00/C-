#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
/*
r=1.5,h=3
*/
float r,h,pi=3.1415926;
scanf("%f%f",&r,&h);
printf("圆的面积:%6.2f\n",pi*r*r);
printf("球的体积:%6.2f\n",(4.0/3.0)*pi*r*r*r);

system("pause");
return 0;
}