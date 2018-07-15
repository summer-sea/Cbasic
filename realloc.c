#include <stdio.h>
#include<stdlib.h>
/*
 * realloc 申请内存
 * 在原有基础上追加内存，原数组的元素保持不变
 * 如果5个字节用完后面的内存为空则直接追加5个字节内存，
 * 如果后面内存被用掉，则会在找一块10个字节内存，然后把之前
 * 的5个字节元素拷贝过来，并且释放掉之前的5个字节内存
 *
 * realloc(void *ptr,size_t size)
 * */

int main() {
    char *p;
    char *s;
    int i;
    int len=5;
    s = malloc(len);
    p=s;
    while((*p=getchar())!='q')
    {
        putchar(*p);
        //如果接收字符超过内存后重新申请内存在原有5上追加
        if(i == len -1){
            len+=len;
            //重新申请内存
             //现在s是5 len是10 然后追加5 总数变为10
          s=p= realloc(s,len);//有可能内存是新找的所以p也要重新指向一下
           i++;
           p+=i;//因为p是首地址所以让它指向内存分配后的第i个元素
           continue;
        };
        p++;
        i++;
    }
    printf("Hello, World!\n");
    return 0;
}