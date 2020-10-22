//
//  main.c
//  test_10.22
//
//  Created by 高辉 on 2020/10/22.
//

#include <stdio.h>
#include <string.h>

int main()
{
    printf("%d\n",printf("%d",printf("%d",43)));
    return 0;
}

//int main()
//{
//    printf("%ld\n",strlen("abc"));
//
//    return 0;
//}

//void Printhehe()
//{
//    printf("呵呵\n");
//}
//void ThreePrint()
//{
//    for (int i = 0;i<3;i++)
//    {
//        Printhehe();
//    }
//}
//int main()
//{
//    ThreePrint();
//    return 0;
//}

//void Add(int* pa)
//{
//    (*pa)++;
//}
//int main()
//{
//    int num = 0;
//    Add(&num);
//    printf("%d\n",num);
//    Add(&num);
//    printf("%d\n",num);
//    Add(&num);
//    printf("%d\n",num);
//    return 0;
//}

//int binary_search(int x[],int y,int sz)
//{
//    int i = 0;
//    for (i=0;i<sz;i++)
//    {
//        if (x[i] == y)
//            return i;
//    }
//    return -1;
//}
//
//int binary_search_2(int x[],int y,int sz)
//{
//    int a = 0;
//    int b = sz-1;
//    int z = 0;
//    while (a<=b)
//    {
//        z = (a + b)/2;
//        if (y>x[z])
//            a = z + 1;
//        else if (y<x[z])
//            b = z - 1;
//        else
//            return z;
//    }
//    return -1;
//}
//
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int k = 7;
//    int sz = sizeof(arr)/sizeof(arr[0]);
////    int ret = binary_search(arr,k,sz);
//    int ret = binary_search_2(arr,k,sz);
//
//    if (ret == -1)
//        printf("找不到下标\n");
//    else
//        printf("找到了，下表是%d\n",ret);
//    return 0;
//}

//int is_leap_year(int x)
//{
//    if (((x%4 == 0) && (x%100 != 0)) || (x%400 == 0))
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int year = 0;
//    for (year=1000;year<=2000;year++)
//    {
//        if (is_leap_year(year) == 1)
//            printf("%d是闰年\n",year);
//    }
//    return 0;
//}

//int is_prime(int x)
//{
//    int a = 0;
//    for (a=2;a<x;a++)
//    {
//        if (x%a == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int i = 0;
//    for (i=100;i<=200;i++)
//    {
//        if (is_prime(i) == 1)
//            printf("%d\n",i);
//    }
//    return 0;
//}

//void Swap(int* x,int* y)
//{
//    int tmp = 0;
//    tmp = *x;
//    *x = *y;
//    *y = tmp;
//}
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int sz = 0;
//    printf("%d %d\n",a,b);
//
//    Swap(&a,&b);//利用指针
//    printf("%d %d\n",a,b);
//    sz = sizeof(&a);
//    printf("%d\n",sz);
//
//
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    int b = 20;
//    int tmp = 0;
//    tmp = a;
//    a = b;
//    b = tmp;
//    printf("%d   %d\n",a,b);
//    return 0;
//}

//int get_max(int x,int y)
//{
//    if (x>y)
//        return x;
//    else
//        return y;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d",&a);
//    scanf("%d",&b);
//    int max = get_max(a,b);
//    printf("%d\n",max);
//    return 0;
//}

//int main()
//{
//    char arr[] = "hello world";
//    memset(arr,'*',5);
//    printf("%s\n",arr);
//    return 0;
//}
