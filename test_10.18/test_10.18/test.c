//
//  test.c
//  test_10.18
//
//  Created by 高辉 on 2020/10/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a=0;
    int b=~a;
    printf("%d\n",b);
    
    return 0;
}

//int main()
//{
//    char input[20] = {0};
//    system("shutdown -s -t 60");
//
//again:
//    printf("请输入求求你了\n");
//    scanf("%s",input);
//    if (strcmp(input,"求求你了")==0)
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}

//int main()
//{
//    int arr[] = {1,2,3,4,5,1,2,3,4};
//    int i = 0;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int ret=0;
//    for (i=0;i<sz;i++)
//    {
//        ret=ret^arr[i];
//    }
//    printf("单身狗是：%d\n",ret);
//    return 0;
//}

//int main()
//{
//    int arr[] = {1,2,3,4,5,1,2,3,4};
//    int i = 0;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//
//    for (i = 0;i<sz;i++)
//    {
//        int count = 0;
//        int j=0;
//        for (j=0;j<sz;j++)
//        {
//            if (arr[i]==arr[j])
//            {
//                count++;
//            }
//        }
//        if (count == 1)
//        {
//            printf("找到单身狗:%d\n",arr[i]);
//            break;
//        }
//    }
//    return 0;
//}
