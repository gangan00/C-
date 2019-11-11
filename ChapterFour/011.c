#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*

*/
int a,b,c,d,max;
scanf("%d%d%d%d",&a,&b,&c,&d);
max = a>b?a:b;
max = max>c?max:b;
max = max>d?max:c;
printf("max is %d",max);

system("pause");
return 0;
}