#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
a,b,c 三个里面最大的数字
*/
int a,b,c,max;

scanf("%d%d%d",&a,&b,&c);
max = a >b ?a:b;
max = max >c ?max :c;

printf("%d",max);


system("pause");
return 0;
}