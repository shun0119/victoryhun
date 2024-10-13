#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int solve(int num)
	{
	int a;
	if (num > 0)
	{
		a = num / 2;
		solve(a);
		printf("%d", num % 2);
	}
	}
	
int main(void)
{
	int num;
	printf("please enter a number:");
	scanf("%d", &num);
	if (num == 0)
		printf("0");
	else
	{
		solve(num);
	}
	return 0;
}