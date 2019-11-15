#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
scanf 如何输入的格式问题
*/
int a,b;
float x,y;
char c1,c2;
scanf("a=%d b=%d",&a,&b);
scanf("%f%f",&x,&y);
scanf("%c%c",&c1,&c2);
printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c",a,b,x,y,c1,c2);
system("pause");
return 0;
}