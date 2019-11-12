#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
while里面的条件并不是一次就执行完的
*/
int n=2,k=0;
while (k++&&n++>2)
//k=0,不会在继续执行n++了
{
    printf("while ");
}
printf("k=%d\n,n=%d\n",k,n);

system("pause");
return 0;
}