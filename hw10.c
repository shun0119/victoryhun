#include<stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

struct thrpoint
{
	char Name[20];
	char Country[20];
	int Population;
};

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

int main(void)
{
	struct thrpoint str[3];
	int i, u;
	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(str[i].Name, sizeof(str[i].Name), stdin);
		
		RemoveBSN(str[i].Name);
		printf("Country> ");
		fgets(str[i].Country, sizeof(str[i].Country), stdin);
		
		RemoveBSN(str[i].Country);
		printf("Population> ");
		scanf("%d", &str[i].Population);
		u = getchar();
		
	}
	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people\n", i+1, str[i].Name, str[i].Country, str[i].Population);
	}
	return 0;
}