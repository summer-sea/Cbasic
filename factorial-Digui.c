#include <stdio.h>
/*
 * 利用递归求阶乘
 *
 * */
int factorial(int n){
    if(n == 0)
        return 1;

        return n*factorial(n-1);



}
int main() {
    int n=4;
    int result = factorial(n);
    //printf("Hello, World!\n");
    printf("%d\n",result);
    return 0;
}