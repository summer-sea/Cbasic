#include <stdio.h>
#include <mem.h>
/*
 * 结构体为不同类型数据的汇聚
 * 有 匿名结构体，有名结构体，typedef别名结构体
 *  结构体成员地址从低到高连续分配
 *  首成员对应低地址
 *  4字节对齐地址是4的整数倍
 *  相同的机构体变量可以直接赋值
 * */
 //匿名结构体只能在定义结构体时
 //第一结构体变量其它时候就不能定义了
 //a,b,c 为结构体变量
 struct{
    int id;
    char name[20];//及时数据没有20个字节也会分配20个字节
    char sex;
}a1,b1;
 //有名结构体既可以在定义结构体时定义变量也可以用日后定义变量
struct stu{
    int id;
    char name[20];
    char sex;
};
//别名结构体
struct Student{
    int id;
    char name[20];
    char sex;
};
typedef struct Student student;




int main() {
    //用有名结构体定义变量
    struct stu a2;
    //初始化数据,错误只能在定义结构体变量时用 ’=‘
    //a2 ={"1","xiaohong","nan"};
    struct stu b2 ={1,"xiaohong",'n'};
    //初始化数据注意与上面的区别定义变量完成后只能用 ’.‘的方法赋值
    a2.id=10;
    //对数组赋值
    strcpy(a2.name,"xiaohong");
    printf("%s\n",a2.name);
    //编译器取一个字节和4个字节开销是一样的
    //大小会4字节对齐
    printf("sizeof(a2)=%d\n",sizeof(a2));
    printf("sizeof(struct stu)=%d\n",sizeof(struct stu));
    /*指针索引*/
    student as,*sp;
    sp->id =10;
    strcpy(sp->name,"xiaolv");
    sp->sex ='m';
    //printf("%s",as.name);
    return 0;
}