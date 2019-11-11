#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {


	FILE *f = fopen("C:\\Users\\dewde\\Desktop\\c_file_test\\test.txt","w");

	if (f == NULL) {
		printf("failed\n");
		return -1;
	}
	else {
		printf("success\n");
	}
	//写文件
	char name;
	name = 'g';
	fputc(name, f);
	name = 'cbxds';
	fputc(name, f);
	fclose(f);
	system("pause");
	return EXIT_SUCCESS;

}