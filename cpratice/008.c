#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
对字符常量赋值
不像答案说的 char a2 = 'aa'; 会出错，
并没有出错
*/
char a1 ='a';
char a2 = 'aa';
char a3 = '\n';
char a4 = '\x2d';

printf("%c\n",a1);
printf("%d\n",a1);
printf("%c\n",a2);
printf("%c\n",a3);
printf("%c\n",a4);
system("pause");
return 0;
}