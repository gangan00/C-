#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/* 
输入三个整数 按照由小到大的顺序输出，用指针的方法实现
*/
int a,b,c,max,*p1,*p2;
printf("please enter two integer numbers\n");
scanf("%d%d%d",&a,&b,&c);

max = ((a>b?a:b)>c)?(a>b?a:b):c;

p1 = a>b?&a:&b;

p2=*p1>c?p1:&c;

printf("*p2 max num is %d:\n",*p2);
printf("max num is %d:\n",max);
system("pause");
return 0;
}