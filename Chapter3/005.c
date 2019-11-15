#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
"China"
*/
char a='C',b='h',c='i',d='n',e='a';
char china[]={'C','h','i','n','a'};
char new;
for(int i=0;i<sizeof(china);i++){
    new = china[i]+4;

    //printf("%c\n",china[i]);
    printf("%c",new);
}
for(int i=0;i<sizeof(china);i++){
    new = china[i]+4;

    //printf("%c\n",china[i]);
    putchar(new);
}

system("pause");
return 0;
}