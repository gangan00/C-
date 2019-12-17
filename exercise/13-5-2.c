#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
打开a.txt读取 存放到b.txt
*/
FILE *p1,*p2;
char c;
p1 = fopen("C:\\Users\\dewde\\Desktop\\c_file_test\\a.txt","r");
p2 = fopen("C:\\Users\\dewde\\Desktop\\c_file_test\\b.txt","w");

if(p1==NULL || p2==NULL) printf("open file failed");

while ((c = fgetc(p1))!=EOF)
{
    fputc(c,p2);//写入到b.txt
}
fclose(p1);
fclose(p2);

system("pause");
return 0;
}