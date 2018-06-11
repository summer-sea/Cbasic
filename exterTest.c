#include <stdio.h>
/*
 * extern 声明变量为外部已定义变量，或声明函数为已在别得位置定义过的函数
 * 声明变量在别的文件
 * 另一个文件在externTest2
 * */

 extern int foo(void); //extern 声明变量在别的文件
int c =3;
void fun(int a){

    printf("%d\n",a);
}
int main() {
    int b =100;
    //fun(b);
    //printf("Hello, World!\n");
    foo();
    return 0;
}