#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * 生成随机数
 * 改写成指针形式
 * */
 //void init_array(int arr[],int n){ //初始写法
 void init_array(int *arr,int n){ //改写后传入指针
    // arr[3] =5;  //*（arr+3）=5
    //srand(1);  //生成一个随机数种子参数表示 是个固定的数
   // srand(time(NULL)); //根据 秒数 生成
     int i;
     for(i=0;i<n;i++){
         arr[i]= rand() %10; //对100求余得到100以内的随机数
     }
 }
 void show_array(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
        putchar('\n');
        //getchar();
    }
 }
int main() {
     int a[10];
     init_array(a,10); //传入a数组相当于传入a数组的首地址，相当于指针
     show_array(a,10);
    //printf("Hello, World!\n");
    return 0;
}