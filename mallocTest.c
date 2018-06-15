#include <stdio.h>
#include<stdlib.h>
/*
 * 程序初始的栈的大小是一定的，所以对比较大的数据要用到动态分配内存
 * 动态分配内存
 * malloc 分配内存
 *只要被分配了内存就不会回收
 * */
int main() {
    while(1){
        malloc(1024); //单位是字节分配1024字节 在windows管理器中查看
    }
    //printf("Hello, World!\n");
    return 0;
}