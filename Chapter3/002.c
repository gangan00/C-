#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
/*
没发现有lg10 这个函数
*/
//ouble p=6000,r=0.01,d=300000,m;
float p=6000,r=0.01,d=300000,m;
printf("%f\n",r);
m = log10f(p/(p-d*r))/log10f(1+r);
printf("%.1f\n",m);
system("pause");
return 0;
}