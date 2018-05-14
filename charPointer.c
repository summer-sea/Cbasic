#include <stdio.h>
#include <string.h>


/*
 * 字符型指针
 * */
int main() {
    char str[] ="helloworld";
    /**编译器会在后面给出\0所以sizeof是11而strlen为有效字符串长度不计算\0
            所以为10
            %s 为打印字符串实际上为从首地址开始依次putchar
     **/
    printf("sizeof(str)=%d\nstrlen(str)=%d\n%s\n",
           sizeof(str),strlen(str),str);

    /*
     *指针形式输出字符串数组
     * */
    char *p =str; //数组名表示数组首地址，所以不用取地址符
    while(*p !='\0'){ //*p 取到的是h
        putchar(*p);
        p++;  //地址++ 指向下一个字符

    }


    getchar();
    return 0;
}