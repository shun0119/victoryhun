#include<stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
double standard(double * ptr1)
{
	double mu = 0, v = 0;
	mu = (ptr1[0] + ptr1[1] + ptr1[2] + ptr1[3] + ptr1[4]) / 5;
	v = (pow((ptr1[0] - mu), 2) + pow((ptr1[1] - mu), 2) + pow((ptr1[2] - mu), 2) + pow((ptr1[3] - mu), 2) + pow((ptr1[4] - mu), 2)) / 5;
	return sqrt(v);
}
int main(void)
{
	double arr[5];
	printf("Enter 5 real numbers:");
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("%.3f", standard(arr));
}