#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int a = 10;
	printf("%d\n", sizeof(a));
	return 0;
}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	//0是假，其余的都是真
//	printf("%d\n", !a);
//	//!是逻辑取反
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//复合赋值符
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	//011
//	//101
//	printf("%d\n", c);
//	//001  必须全为1才为1不然都为0 与
//	printf("%d\n", d);
//	//111  只要有个是1就好了 或
//	printf("%d\n", e);
//	//110  不同为1，相同为0 非
//
//	return 0;
//}

//int main()
//{
//	//移位操作符
//	int a = 1;
//	int b = a << 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	while (i<10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
//	char ch[20];
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 1;
//	int sum;
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码  %d\n",line);
//		line++;
//
//	}
//	printf("给你一个好offer\n");
//	return 0;
//}

//int main()
//{
//    int input = 0;
//    printf("高辉很帅\n");
//    printf("你同意不?(1/0)>:");
//    scanf("%d", &input);
//    if (input == 1)
//        printf("志同道合\n");
//    else
//        printf("你是NT\n");
//    return 0;
//}


//int main()
//{
//	//\n是转义字符，\可以改变字符原有的意思
//	//\32的意思是先8进制32转换成10进制，再去找10进制的ASCII码
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	//char arr2[] = { 'a','b','c' ,'\0'};
//	//字符串\0的值是0，上面可以写成{ 'a','b','c' ,0}
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	//遇到\0结束
//	printf("%d\n", strlen(arr2));
//	
//	return 0;
//}

//enum Color
//{
//	Red,
//	Yellow,
//	Blue
//};
//
//int main()
//{
//	enum Color color = Blue;
//	return 0;
//}

//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	return 0;
//}

//int main()
//{
//	//const-常属性
//	const int num = 4;//n是常属性变量，本质还是变量
//	printf("%d\n", num);
//
//	return 0;
//}

//int main()
//{
//	int num1 = 1;
//	int num2 = 1;
//	int sum = 1;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d", sum);
//
//	return 0;
//}