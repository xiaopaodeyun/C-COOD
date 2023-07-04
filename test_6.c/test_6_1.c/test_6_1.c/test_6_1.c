
#include<stdio.h>
struct Stu
{
	char name[18];
	int age;
	double score;
};
struct Book
{
	char name[18];
	float price;
	char id[30];
};
int main()
{
	struct Stu s = { "Ð¡ºì",18,99.5 };
	printf("1: %s %d %lf", s.name, s.age, s.score);


	return 0;
}