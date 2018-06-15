#include <stdio.h>
#include<stdlib.h>
/*
 * 栈的容量比较小，比较大的数据要用堆，
 * 栈堆内存反复回收反复利用，所以运行比较快
 * 要数据一致存在则要用堆
 * 用堆要切记 free（p）
 * 堆栈
 * 栈先进后出
 * 在栈上的内存会自动回收
 * 堆上的内存不会自动回收
 *free(p);释放内存
 * 内存泄漏：在编码时没有及时释放内存，导致内存溢出
 * */
 void test(){
     int num[10]={1,2,3,4,5,6,7,8,9,10};//栈上
     int *p =(int *) malloc(sizeof(int)*10);//只有malloc在堆上
     printf("%p,%p",num,p);//栈内存，堆内存，%p打印地址
     for(int i=0;i<10;i++){
         p[i]=i;//初始化堆内存
     }
     printf("\n\n");
 }
void main() {
    test();
    test();

}