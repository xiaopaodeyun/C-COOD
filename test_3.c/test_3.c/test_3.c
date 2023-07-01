#include <stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));

	printf("(are you ok??)");
	printf("%c\n", '\'');
	printf("\a\a\a");
	printf("%c\n", '\101');
	printf("%c/n", '\x30');






























	return 0;
}