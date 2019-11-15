#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main(){
/*
pai/4 = 1-1/3+1/5-1/7……
*/
double sum=0.0,a = 1.0,a1,a2;
for (int i = 1;;i++){
    a1 = -pow(-1,i);
    a2 = 2*i-1;
    a =a1/a2;

    printf("%.1f/%.1f\n",a1,a2);
    sum += a;
    //Sleep(200);
    if(fabs(a)< 0.1e-6) break;

}

printf("%20.15f",sum*4);
system("pause");
return 0;
}