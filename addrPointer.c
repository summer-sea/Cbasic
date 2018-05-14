#include <stdio.h>
/*
 * 传值和传址问题
 *修改前传入数值，但是main函数中的a，b和swap函数中的a，b是不同参数在
 * swap函数中完成的交换，但是main函数中的a，b并没有发生变化
 * 只是传递过去一个数值
 *
 * 传地址
 *
 *
 * */
//void swap(int a,int b){  //a,b为swap 函数中的a，b
 void swap(int *a,int *b){ //a_swap = 0x8000 b_swap = 0x9000
     /*int temp;
     temp = a;
     a =b;
     b =temp;*/
    int temp;
    temp = *a;  //去 0x8000中取一个int型数据赋值给temp
    *a =*b; //去 0x9000中取一个int型数据赋值给0x8000这个内存单元
    *b =temp;
    //printf("Hello, World!\n");
    //printf("a=%d\tb=%d\n",a,b);  //交换完成，但是交换的是swap中的a.b和main函数中的没有关系
 }
int main() {
    int a=3; //&a =0x8000
    int b=4;//&b=0x9000
    //swap(a,b);  //3,4 传值
    swap(&a,&b); // 传 a，b的地址
    //printf("a=%d\tb=%d\n",a,b);  //无交换在swap中的a，b完成了交换但是main函数中a，b没有变化
    printf("a=%d\tb=%d\n",a,b);
    return 0;
}