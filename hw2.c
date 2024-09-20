#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num;
	printf("Please enter kilometers: ");
	scanf("%lf", &num);
	double data = num / 1.609;
	printf("%.1f km is equal to %.1f miles.", num, data );
	return 0;
}