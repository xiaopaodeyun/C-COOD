#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char passwordp[20] = { 0 };
	printf("����������:>");
	scanf("%s", passwordp);
	printf("����������(Y/N):>");
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d", i);
	}





	return 0;
}