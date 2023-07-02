#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//选择语句
	int input = 6;
	printf("我己经加入比特了:>\n");
	printf("如果我好好学习的话(9/6)?:>");
	scanf("%d", &input);

	if (input == 9)
	{
		printf("直接起飞\n");
	}
	else
	{
		printf("直接原地坐牢\n");
	}


	//循环语句
	int line = 0;
	while (line < 36500)
	{
		printf("写代码：%d\n", line);
		line++;
	}
	if (line == 36500)
	{
		printf("专业课365°原地起飞\n");
	}


	return 0;
}