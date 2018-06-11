#include <stdio.h>
/*
 *extern 声明变量在别的文件
 * */
 extern int c;
int foo(void) {
    printf("%d\n",c);
    printf("Hello, World!\n");
   // return 0;
}