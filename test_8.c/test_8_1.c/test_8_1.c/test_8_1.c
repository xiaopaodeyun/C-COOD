#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char passwordp[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", passwordp);
	printf("请输入密码(Y/N):>");
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}

	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d", i);
	}





	return 0;
}