#include<stdio.h>
int main(void)
{
	int arr1[5];
	int i = 0;
	printf("Plese input five integers: ");
    scanf("%d %d %d %d %d", &arr1[0], &arr1[1], &arr1[2], &arr1[3], &arr1[4]);
	printf("Odd number:");
	for (i = 0; i < 5; i++)
		if (arr1[i] % 2 != 0)
			printf("%d ", arr1[i]);
	printf("\nEven number:");
	for (i = 0; i < 5; i++)
		if (arr1[i] % 2 == 0)
			printf("%d ", arr1[i]);

	return 0;
}