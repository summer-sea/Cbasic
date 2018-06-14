#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
/*
 * 函数指针
 * 定义一个指向函数的指针变量，保存的为函数的起始地址
 * 意味着此指针变量指向该函数
 * 存储了函数地址和参数类型
 * int (*p)(int a,int b) =add;
 *
 *
 *
 *
 * */
 void msg(char *ch){
     MessageBoxA(0,"测试一",ch,0);


 }
 /*
  * 找到保存msg这个函数的内存地址 然后在另一个项目中通过函数指针调用
  * */
void main(){
     printf("%p",msg);//00401460
     msg("AAa");


}