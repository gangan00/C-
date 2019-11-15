#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {


	FILE *f = fopen("C:\\Users\\dewde\\Desktop\\c_file_test\\test.txt","r");

	if (f == NULL) {
		printf("failed\n");
		return -1;
	}
	else {
		printf("success\n");
	}
	//读文件
    char ch;
    while ((ch = fgetc(f)) != EOF)
    {
        printf("%c",ch);
    }
    
	fclose(f);
	system("pause");
	return EXIT_SUCCESS;

}