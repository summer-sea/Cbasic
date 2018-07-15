#include <stdio.h>
#include<stdlib.h>
#include <string.h>

/*
 * malloc是分配到堆上的内存
 * calloc(size_t nmemb,size_t size);
 * */
int main() {
    int i;
    //分配100个字节,在堆上
   //int  *p =malloc(100);
    int *p = calloc(25, sizeof(int));//在堆上申请25*4 =100个字节
    //将首地址100个字节全部置成0，参数为地址，初始化什么值，字节
    memset(p,0,100);
    for(i =0;i<25;i++){
        //把p当成了一个数组使用
        p[i] =i;
    }
    for(i =0;i<25;i++){
        printf("%d\n",p[i]);
    }
    //p++; //p指针地址改变。free 将出错误
    //如果没有释放p就会造成内存泄漏
    free(p);
    return 0;

}