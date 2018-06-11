#include <stdio.h>
/*
 * 给编译器看的修饰符 把变量修饰成常量
 * 在编译的时候就已经不允许修改
 * */
int main() {
    const int a = 3;
    int b =5;
    //a =8; //直接报错，在编译的时候就已经不允许修改了
    int *const p =&b;
    //p++; 错误地址无法改变，内容可以
    *p =10;

    printf("%p\t%d\n",&a,a);
    printf("%p\t%d\n",&b,b);
    //printf("Hello, World!\n");
    return 0;
}