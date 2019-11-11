#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
int a=18,b=20;
//此处的 * 只表示这是个指针变量
int * p1,*p2;
//给指针变量赋值
p1 = &a;
p2=&b;
//引用指针指向的变量
printf("value of p1 %d\n",*p1);
//引用指针变量的值
printf("adress of a %o\n",p1);
system("pause");
return 0;
}

void print_int_list(int *a,int n){
    int i =0;
    for(i=0;i<n;i++){
    printf("%d\n",*(a+i));
}
}