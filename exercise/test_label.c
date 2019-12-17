#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
label 不使用goto 会不会被执行
*/
label:printf("excute\n");
//goto label;
//这样就会无限循环；
system("pause");
return 0;
}