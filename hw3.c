#include <stdio.h>
int main(void)
{
	int i, k, j;
	int n = 5;
	for (i = 0; i < 5; i++)
	{
		for (k = 4; k >= i; k--)
			printf(" ");
		for (j = 1; j<=(i*2 + 1); j++)
			printf("*");
		printf("\n");
	}
	return 0;
}