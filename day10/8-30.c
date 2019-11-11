/* 
建立动态数组，输入五个学生的成绩，另外用一个函数检查其中有无低于六十分的成绩，输出不合格的成绩。
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
void check(int *p);
int* p1,i;
p1 = (int *)malloc(5 * sizeof(int)); // 开辟内存空间并转换为int*类型，然后放在P1中
for(i=0;i<5;i++){
    //输入五个学生成绩
    scanf("%d",p1+i);
}
check(p1);
system("pause");
return EXIT_SUCCESS;
}

void check(int *p){ 

int i;
printf("they are fail\n");
for(i=0;i<5;i++){
if(p[i]<60) printf("%d\n",p[i]);
}
free(p);

}