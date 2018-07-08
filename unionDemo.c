#include <stdio.h>
#include <mem.h>
/*
 *union 使用不同类型的变量共占一块内存（相互覆盖）
 * 此共用体大小为元素中最大字节变量
 * */
 //里面有三个类型最大的 为int 类型 4个字节同一时刻只能解释成一个成员变量
 //共用一块内存相互覆盖
 union item{
     float price;
     char name[20];

 };
 struct goods{
    char name[20]; //物品真正的名字
    int flag; //0免费，1收费
     //此处用union可以节约内存
    union item ite;//免费物品打印name，收费物品描述价格

 };
int main() {
    int i;
    struct goods a[1000];
    char buf[1024];
    for(i =0;i<1000;i++){
        scanf("%s",buf);
        strcpy(a[i].name,buf);
        getchar();
        scanf("%d",&a[i].flag);
        getchar();
        if(a[i].flag ==1){
            scanf("%f",&a[i].ite.price)
        }else{
            scanf("%s",a[i].ite.name);
        }
    }

    return 0;
}