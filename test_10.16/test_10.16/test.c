#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����һ��stdio.h���ļ�
//std����׼ standard input output

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	printf("%c\n", ch);//��ӡ�ַ�c
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
//	//float��int�ֽڳ���һ�� char�ֽڳ�����1
//	//һ���ֽ�8��bit
//}


//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ���飨{}��֮�ڵı���
//	
//	return 0;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������ᣬ����bug
//	//���ֲ�������ȫ�ֱ�����������ͬʱ�򣬾ֲ���������
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