#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d", i);

		int x, y;
		for (x = 0, y = 0; x < 2 && y < 5; y++)
		{
			printf("hehe\n");
		}

	}

	return 0;
}