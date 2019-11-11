#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
将数组a中的n个整数按相反的顺序存放
*/
void reserve(int * p1,int n);
int a[]={1,2,34,53,2,43,78,99};
//a的首地址传递过去
int n = sizeof(a)/sizeof(int);
printf("array length is %d\n",n);
reserve(a,n);
for(int i=0;i<n;i++){
    printf("%d\n",*(a+i));
}

system("pause");
return 0;
}
void reserve(int * p,int n){
int temp,i,j,m=(n-1)/2;

for(i=0;i<=m;i++){

j = n-1-i;
temp = *(p+i);
*(p+i) = *(p+j);
*(p+j) = temp;

}
}