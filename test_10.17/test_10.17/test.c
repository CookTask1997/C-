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
//	//0�Ǽ٣�����Ķ�����
//	printf("%d\n", !a);
//	//!���߼�ȡ��
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
//	//���ϸ�ֵ��
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
//	//001  ����ȫΪ1��Ϊ1��Ȼ��Ϊ0 ��
//	printf("%d\n", d);
//	//111  ֻҪ�и���1�ͺ��� ��
//	printf("%d\n", e);
//	//110  ��ͬΪ1����ͬΪ0 ��
//
//	return 0;
//}

//int main()
//{
//	//��λ������
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
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���  %d\n",line);
//		line++;
//
//	}
//	printf("����һ����offer\n");
//	return 0;
//}

//int main()
//{
//    int input = 0;
//    printf("�߻Ժ�˧\n");
//    printf("��ͬ�ⲻ?(1/0)>:");
//    scanf("%d", &input);
//    if (input == 1)
//        printf("־ͬ����\n");
//    else
//        printf("����NT\n");
//    return 0;
//}


//int main()
//{
//	//\n��ת���ַ���\���Ըı��ַ�ԭ�е���˼
//	//\32����˼����8����32ת����10���ƣ���ȥ��10���Ƶ�ASCII��
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	//char arr2[] = { 'a','b','c' ,'\0'};
//	//�ַ���\0��ֵ��0���������д��{ 'a','b','c' ,0}
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	//����\0����
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
//	//const-������
//	const int num = 4;//n�ǳ����Ա��������ʻ��Ǳ���
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