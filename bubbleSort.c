#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

/*
 * 冒泡排序
 *
 *
 * */
init_arr(int arr[],int n){
    int i;
    srand(time(NULL));
    for(i=0;i<n;i++){
        arr[i] = rand()%100;
    }

}
show_arr(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%5d\n",arr[i]);
    }
    putchar('\n');

}
void swap(int *x,int *y){
    int temp;
    temp =*x;
    *x= *y;
    *y= temp;

}
bubble_sort(int arr[],int n){
    int i,j;
    for( i =0;i<n;i++) {
        // j<n-i-1 减一是到n的时候防止数组越界。减i是最小的已经在前面
                //  不需要再比较一次
                //直接从下一个开始
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
            swap(&arr[j],&arr[j+1]);

            /*if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }*/
        }
    }



}
int main() {
    int a[N];
    init_arr(a,N);
    show_arr(a,N);
    bubble_sort(a,N);
    show_arr(a,N);

    //printf("Hello, World!\n");
    return 0;
}
