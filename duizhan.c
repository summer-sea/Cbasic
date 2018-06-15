#include <stdio.h>
#include<stdlib.h>
/*
 * 堆栈
 * 栈先进后出
 * 在栈上的内存会自动回收
 * 堆上的内存不会自动回收
 *free(p);释放内存
 * 内存泄漏：在编码时没有及时释放内存，导致内存溢出
 * */
void main() {
    while(1){
        //函数内部定义的变量一般在栈，
        //自动释放
       // double x[1024 * 100];
        //分配到堆上，不回收自己不会自动回收
        void  *p = malloc(1024*1024*100);
        free(p);//释放内存
    }
    printf("Hello, World!\n");
    //return 0;
}