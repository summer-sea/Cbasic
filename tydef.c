#include<stdio.h>
typedef ssize_t int ;
typedef unsigned char u8_t;
typedef unsigned int u32_t;
typedef unsigned int size_t;
// ypedef ssize_t long long;
typedef char * NEWTYPE;
//#define NEWTYPE char *;
/*
 * 将int 起一个别名为 ssize_t
 *typedef 相当于起一个别名
 * 封装数据类型
 * 讲话函数指针定义
 * */
/*
 * 注意和define的区别
 *
 * */

ssize_t mystrlen(char *str){

}

int main(){
    //用typedef 相当于三个变量都是char * 类型‘
    //而如果是define定义相当于只是P1为char * 类型，而P2，P3并不是
    NEWTYPE  P1,P2,P3;
    char *s ="hello";
}
char * (*p)(char *,int *,char **){}
//可以直接定义成一个别名，注意定义的是这种类型
typedef char *(*)(char *,int *,char **) FUN;
FUN too(int a);
