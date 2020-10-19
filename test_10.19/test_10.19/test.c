//
//  test.c
//  test_10.19
//
//  Created by 高辉 on 2020/10/19.
//

#include <stdio.h>
#include <string.h>

struct Book
{
    char name[20];
    short price;
};
int main()
{
    struct Book b1 = {"C语言程序设计",55};
    strcpy(b1.name,"C++");
    printf("%s\n",b1.name);
//    struct Book* pb = &b1;
//    printf("%s\n",pb->name);
////    printf("%s\n",(*pb).name);
//    printf("价格是：%s\n",b1.name);
//    printf("价格是：%d\n",b1.price);
    return 0;
}
//int main()
//{
//    double d =3.14;
//    double* pd=&d;
//    *pd=5.5;
//    printf("%lf\n",d);
//    printf("%lf\n",*pd);
//    return 0;
//}
//int main()
//{
//    int a=10;
//    printf("%p\n",&a);
//    int* p=&a;
//    printf("%p\n",p);
//
//}
