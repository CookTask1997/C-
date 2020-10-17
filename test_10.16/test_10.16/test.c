#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//包含一个stdio.h的文件
//std—标准 standard input output

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	printf("%c\n", ch);//打印字符c
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//	//float和int字节长度一样 char字节长度是1
//	//一个字节8个bit
//}


//int num2 = 20;//全局变量-定义在代码块（{}）之外的变量
//
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块（{}）之内的变量
//	
//	return 0;
//	//局部变量和全局变量的名字建议不要相同，容易误会，产生bug
//	//当局部变量和全局变量的名字相同时候，局部变量优先
//}

int main()
{
	int num1 = 1;
	int num2 = 2;
	int sum = 0;
	
	scanf("%d %d", &num1, &num2);
	
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}