#include <stdio.h>

int main() {
    char *str1= "hello";//hello属于字符串常量存储在只读区域
    char *str2[]= "hello"; //str2[6]内存在栈上分配可读可写
    *p++;//先执行++操作
    printf("%s\n",p);

    printf("Hello, World!\n");
    return 0;
}