#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
结构体赋值
*/
struct st{
    int x,y;
}data[2]={1,10,2,20};
struct st*p=data;
printf("%d\n",p->y);
printf("%d\n",(++p)->x);


system("pause");
return 0;
}