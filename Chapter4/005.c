#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
/*

*/
int a;
int result;

scanf("%d",&a);
while(a>1000){
    printf("重新输入\n");
    scanf("%d",&a);
}
result = (int)sqrt(a);
printf("%d",result);
system("pause");
return 0;
}