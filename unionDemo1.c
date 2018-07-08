#include <stdio.h>
#include <mem.h>
/*
 *union 使用不同类型的变量共占一块内存（相互覆盖）
 * 此共用体大小为元素中最大字节变量
 *
 * 大端存储 低地址存储高位，
 * 小端存储 低地址存储低位
 *
 * */
//用联合判断电脑是大端存储还是小端存储
 union DX{
     int  num;
     char s[4];

 };

int main() {
    int i;
    union DX a;
    a.num = 0x12345678;
    printf("%x\n",a.num);
    for(i =0;i<4;i++){
        //因为共用一块内存地址所以数组中也是num中的数值
        printf("a[%d]=%x\n",i,a.s[i]); //a[0]为低地址对应的为78为低位所以为小端存储法
    }

    return 0;
}