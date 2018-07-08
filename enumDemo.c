#include <stdio.h>
/*
 * 枚举将变量的值意义列举出来
 * 而变量只限于列举出来的值得范围内取值
 * 枚举元素不是变量而是常数
 * 因此枚举元素又称为枚举常量
 *
 * 枚举元素作为常量他们是有值得c语言在编译时
 * 按定义的顺序使他们的值为1,1,2.。
 * */

 enum itm{red,black,green=10,blue};
int main() {
    enum itm c1,c2;
    c1 =black;
    c2 = blue;
   // red = black; 错误，因为定义为了枚举常量不能在赋值
    printf("%d\n",c1);//应该为数值1,第一位为0.。依次
    printf("%d\n",c2);//应该为11因为将green置为了10后面依次为11,12.。。
    return 0;
}