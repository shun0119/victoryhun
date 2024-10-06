#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num;
	int tf = 1;
	printf("Please enter a number : ");
	scanf("%d", &num);
	if (num == 1)
	{
		printf("It is not a prime number.");
		tf = 0;
	}
	else
	{
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				printf("It is not a prime number.");
				tf = 0;
				break;
			}
		}
	}
	if (tf == 1)
		printf("It is a prime number.");
	return 0;
}
