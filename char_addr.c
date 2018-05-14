#include <stdio.h>
#include <string.h>
void change_str(char *s){
    //sizeof(s)因为为指针变量所以应该为char类型的指针变量为4
    // strlen(s)为从首字母向后面putchar到 \0结束 为5
    printf("sizeof(s)=%d\tstrlen(s)=%d\n",sizeof(s),strlen(s));
    *(s+3)='\0'; //将首地址后的第3位赋值为 \0 printf 检测到 \0后将停止输出
}
int main() {
    char str[10] = "hello";
    change_str(str);
    printf("%s\n",str);
    return 0;
}