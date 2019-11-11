#include<stdio.h>
#include<stdlib.h>


int main() {

	int a, b,c;
	a = 1;
	b = a++;
    c=++a;
	printf("b=%d\n", b);
	printf("c=%d\n", c);
    system("pause");
	return 0;

}