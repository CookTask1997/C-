//
//  main.c
//  test_10.20
//
//  Created by 高辉 on 2020/10/20.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//void menu()
//{
//    printf("######################\n");
//    printf("##  1.play  2.exit  ##\n");
//    printf("######################\n");
//}
//
//void game()
//{
//    int ret = 0;
//    int guest = 0;
//    ret = rand()%100 + 11;
////    printf("%d\n",ret);
//    while (1)
//    {
//        printf("请猜数字:>");
//        scanf("%d",&guest);
//        if (guest>ret)
//            printf("你猜大了\n");
//        else if (guest<ret)
//            printf("你猜小了\n");
//        else
//        {
//            printf("你猜对了\n");
//            break;
//        }
//    }
//}
//
//int main()
//{
//    int input = 0;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();
//        printf("请选择:>");
//        scanf("%d",&input);
//        switch (input)
//        {
//            case 1:
//                game();
//                break;
//            case 2:
//                printf("退出程序\n");
//                break;
//            default:
//                printf("输入错误\n");
//                break;
//        }
//    }while (input != 2);
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    char password[20] = {0};
//    for (i=0;i<3;i++)
//    {
//        printf("请输入密码:>");
//        scanf("%s",password);
//
//        if (strcmp(password, "123456") == 0)
//        {
//            printf("登录成功\n");
//            break;
//        }
//    }
//    if (i == 3)
//        printf("三次密码输入错误，退出程序\n");
//    return 0;
//}

//int main()
//{
//    char arr1[] = "welcome to bit";
//    char arr2[] = "##############";
//    int left = 0;
//    unsigned long right = strlen(arr1) - 1;
//    while(left<=right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n",arr2);
//        left++;
//        right--;
//    }
//    return 0;
//}

//int main()
//{
//    int arr[] = {1,2,3,4,5,6,8,9,10,11};
//    int k = 7;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int left = 0;
//    int right = sz-1;
//
//    while (left<=right)
//    {
//        int mid = (left+right)/2;
//        if (arr[mid]<k)
//        {
//            right = mid-1;
//        }
//        else if (arr[mid]>k)
//        {
//            left = mid+1;
//        }
//        else
//        {
//            printf("下标是%d\n",mid);
//            break;
//        }
//    }
//    if (left>right)
//        printf("没找到\n");
//    return 0;
//}

//int main()
//{
//    int i = 1;
//    do
//    {
//        printf("%d\n",i);
//        i++;
//    }while (i < 11);
//    return 0;
//}

//int main()
//{
//    for(int i = 1;i<=10;i++)
//    {
//        printf("%d\n",i);
//    }
//    return 0;
//}

//int main()
//{
//    int ch = 0;
//    while((ch=getchar()) != EOF)
//    {
//        if (ch<'0' || ch>'9')
//            continue;
//        putchar(ch);
//        printf("\n");
//    }
////    char password[20] = {0};
////    printf("请输入密码:>");
////    scanf("%s",password);
////    printf("%s\n",password);
//    return 0;
//
//}

//int main()
//{
//    int ch = 0;
//    while((ch=getchar()) != EOF)
//    {
//        putchar(ch);
//    }
////    int ch = getchar();
////    putchar(ch);
//    return 10;
//}

//int main()
//{
//    int i = 0;
//    while (i<=9)
//    {
//        i++;
//        if (5 == i)
//            continue;
//        printf("%d ",i);
//    }
//    printf("\n");
//    return 0;
//}

//int main()
//{
//    char a[20] = "加入比特";
//    char b[20] = "买彩票";
//    int c = 1;
//    printf("%s\n",a);
//again:
//    printf("%s\n",b);
//    printf("是否中彩票了");
//    scanf("%d",&c);
//    if (1 == c)
//        printf("赢取白富美\n");
//    else
//    {
//        printf("彩笔\n");
//        goto again;
//    }
//    return 0;
//}

//int main()
//{
//    int day = 0;
//    scanf("%d",&day);
//    switch(day)//适合多分枝语句，switch必须是整形，case也必须是整形常量表达式
//    {
//        case 1:
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//        case 3:
//            printf("星期三\n");
//        default:
//            printf("输入错误\n");
//            break;
//    }
////    if(1 == day)
////        printf("星期一\n");
//    return 0;
//}

//int main()
//{
//    int a = 1;
//    while (a<=100)
//    {
//        if (a%2 == 1)
//        {
//            printf("%d\n",a);
//        }
//        a++;
//    }
//    return 0;
//}

//int main()
//{
//    int age = 18;
//    if (age<18)
//        printf("未成年\n");
//    else if (age>=18 && age<28)
//        printf("青年\n");
//    else if (age>=28 && age<50)
//        printf("壮年\n");
//    else if (age>=50 && age<90)
//        printf("老年\n");
//    else
//        printf("老不死\n");
//    return 0;
//}
