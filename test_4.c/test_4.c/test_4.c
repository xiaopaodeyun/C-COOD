#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//ѡ�����
	int input = 6;
	printf("�Ҽ������������:>\n");
	printf("����Һú�ѧϰ�Ļ�(9/6)?:>");
	scanf("%d", &input);

	if (input == 9)
	{
		printf("ֱ�����\n");
	}
	else
	{
		printf("ֱ��ԭ������\n");
	}


	//ѭ�����
	int line = 0;
	while (line < 36500)
	{
		printf("д���룺%d\n", line);
		line++;
	}
	if (line == 36500)
	{
		printf("רҵ��365��ԭ�����\n");
	}


	return 0;
}