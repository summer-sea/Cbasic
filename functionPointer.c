#include <stdio.h>
/*
 * 函数指针
 * 定义一个指向函数的指针变量，保存的为函数的起始地址
 * 意味着此指针变量指向该函数
 * 存储了函数地址和参数类型
 * int (*p)(int a,int b) =add;
 * */
int add(int a,int b){
    return a+b;
}
int ful(int a,int b){
    return a*b;
}
int main() {
    int result = add(4,5);
    printf("%d\n",result);
    printf("%p",add); //add保存了函数入口地址
    //指针函数指向该函数的首地址
    int (*p)(int a,int b)=add; //指向add 函数
    printf("%d\n",p(3,4));
    p =ful; //指向ful函数，p是个变量
    printf("%d\n",p(3,4));
    printf("Hello, World!\n");
    return 0;
}