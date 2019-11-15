#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>
int main()
{
    /*

*/
    // for(;;){
    //死循环

    // printf("asdasd");
    //     Sleep(200);
    // }
    // char c;
    // for(int i=0;((c = getchar()) != 'g' && i<8);i++){

    //     printf("%c\n",c);
    // }
    int i = 1;
    double a = 1,a1,a2;

    a1 = pow(-1,2);
    a2 = 2*i-1;
    
    a =a1/a2;
    printf("%f\n", a1);
    printf("%f\n", a2);
    printf("%f\n", a);
    system("pause");
    return 0;
}