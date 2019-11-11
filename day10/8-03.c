#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
//指针变量作为函数参数
void swap(int* p1,int *p2);
int a,b,*p1,*p2;
printf("please enter two integer numbers\n");
scanf("%d%d",&a,&b);
p1 = &a;
p2 = &b;
if(a<b) swap(p1,p2);
//a,b的值变化
printf("max is %d , min is %d ",a,b);


system("pause");
return 0;
}

void swap(int* p1,int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}