#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 100;
	printf("%d\n",a);



	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));








	return 0;
}