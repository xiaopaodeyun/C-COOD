#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	while ((scanf("%d", &n)) != EOF)
	{
		if (n >= 90 && n <= 100)
		{
			printf("A");
		}
		else if (n >= 80 && n < 90)
		{
			printf("B");
		}
		else if (n >= 60 && n < 80)
		{
			printf("C");
		}
		else if (n >= 30 && n < 60)
		{
			printf("D");
		}
		else if (n >= 0 && n < 30)
		{
			printf("E");

		}
		else
			printf("成绩不给予录入");
	}
	return 0;
}