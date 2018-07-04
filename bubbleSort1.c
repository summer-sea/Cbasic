#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <mem.h>

#define N 10

/*
 * 冒泡排序
 *用函数指针实现
 *
 * */
void show_arr(int a[],int n){
    int i;

    for(i =0;i<n;i++){
        printf("%d\n",a[i]);

    }
    //putchar("/");
}
void init_arr(int n,int arr[]){
    int i;
    srand(time(NULL));
    for(i =0;i<n;i++){
        arr[i] = rand()%100;
    }
}
int cmp_int(void *a,void *b){
    //先强制转换成整形地址然后在取*取内容
    int x = *((int *)a);
    int y = *((int *)b);
    return x>y;

}
void swap_int(void *a,void *b){
    int temp;
    temp = *((int *)a);
    *((int *)a) = *((int *)b);
    *((int *)b) =temp;


}
//函数指针swap用来交换，cmp用来比较
//void类型为一个空的类型取地址指针的时候会不知道几个字节所以要强制转换
bubble_sort(void *a,int n,void (*swap)(void *,void *),int (*cmp)(void *,void *)){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            //传入的是地址
            if(cmp((void *)((int *)a+j),(void *)((int *)a+j+1))>0){
                swap((void *)((int *)a+j),(void *)((int *)a+j+1));
            }
        }
    }
}
int main(){
    int a[N];
    init_arr(10,a);
    show_arr(a,10);
    bubble_sort(a,N,swap_int,cmp_int);
    show_arr(a,10);



    //printf("Hello, World!\n");
    return 0;
}
int cmp_str(void *a,void *b){
    int len_a,len_b;
    len_a = strlen((char *)a);
    len_b = strlen((char *)b);
    return len_a >len_b;
}
void swap_str(void *a,void *b){
    char *temp;
    temp = (char *)a;
    (char *)a =(char *)b;
    (char *)b = temp;

}