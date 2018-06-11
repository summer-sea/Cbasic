#include <stdio.h>
/*
 * int *p;相当于int* p;
 * p指的是指针变量存贮的是地址
 * *p存贮的是内容
 * */
int main() {
    int a =3;
    int *p = &a; //定义一个指针变量相当于 int* p;（中间是空格）相当于下面q拆开赋值；
    int *q;
    q= &a;//将a的地址赋给指针变量q；
    *q =5;//将5赋值给对应q地址的内容
    printf("%d\n",*p);
    //三个地址应该是一样的
    printf("%x\n",p);
    printf("%x\n",q);
    printf("%x\n",&a);
    *p=6;
    printf("%d\n",*p);
   // printf("Hello, World!\n");
    return 0;
}