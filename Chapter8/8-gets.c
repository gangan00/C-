#include <stdio.h>
int main(void)
{
    /*
    此外，关于使用 gets() 函数需要注意：使用 gets() 时，
    系统会将最后“敲”的换行符从缓冲区中取出来，然后丢弃，所以缓冲区中不会遗留换行符。
    这就意味着，如果前面使用过 gets()，而后面又要从键盘给字符变量赋值的话就不需要吸收回车清空缓冲区了，
    因为缓冲区的回车已经被 gets() 取出来扔掉了
    */
    char str[30];
    char ch;
    printf("please input:");
    gets(str);
    //scanf("%s", &str);
   
    //printf("%s\n", str);
    puts(str);
    //如果前面使用的不是 gets() 而是 scanf，那么通过键盘给 ch 赋值前就必须先使用 getchar() 清空缓冲区。
    //getchar();//好像也不行
    scanf("%c", &ch);
    printf("ch = %c\n", ch);
    system("pause");
    return 0;
}