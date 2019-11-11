#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
字符串的长度和大小问题
*/
char a[10]="abcd\0\0\0\0\0\0";
//手动加上\0 也没有计入字符的长度里
printf("len=%d\n size=%d\n",strlen(a),sizeof(a));
//在打印上面的区别呢 
char b[10]={'a','b','c'};

printf("len=%d\n size=%d\n",strlen(b),sizeof(b));
for(int i=0;i<10;i++){
    //打印A
    printf("%c\n",a[i]);
}
for(int i=0;i<10;i++){
    //打印B

    printf("%c\n",b[i]);
}
printf("a = %s\n",a);
printf("b = %s\n",b);

system("pause");
return 0;
}