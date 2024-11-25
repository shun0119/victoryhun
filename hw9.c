#include<stdio.h>
#include <string.h>
int inverse(int ch)
{
	const int apb = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + apb;
	else if (ch >= 'a' && ch <= 'z')
		return ch - apb;
	else
		return ch;
}

int main(void)
{
	char ch[100];
	int i = 0;
	printf("Input> ");
	fgets(ch, sizeof(ch), stdin);
	printf("Output> ");
		for (i = 0; i <= (strlen(ch) - 1); i++)
		{
			ch[i] = inverse(ch[i]);
			putchar(ch[i]);
		}
	return 0;
}