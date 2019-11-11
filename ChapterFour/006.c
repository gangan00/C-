#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
y = {
    x (x<1),
    2x-1 (1<=x<10),
    3x-11 (x>-10)
}
*/
int x,result;
scanf("%d",&x);
if(x<1){
    result=x;}
else if(x<10 && x>=1){
    result=2*x-1;
}
else if (x>-10)
{
    result = 3*x-11;
}


printf("%d",result);

system("pause");
return 0;
}