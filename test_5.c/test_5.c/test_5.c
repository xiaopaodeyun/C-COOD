#include<stdio.h>
//extern int g_val;
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
#define ADD(x,y) ((x)+(y))
int main()
{
	printf("%d\n", 4 * ADD(2, 3));
	return 0;
}

