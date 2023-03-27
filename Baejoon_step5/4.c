#include <stdio.h>
#include <string.h>

int main()
{
	int i, a;
	char arr[100] = { 0 }, word[27] = { -1 };
	scanf("%s", arr);
	for (i = 0; i < 26; i++)
	{
		word[i] = -1;
	}
	for (i = 0; i < strlen(arr); i++)
	{
		a = arr[i] - 96;
		if(word[a-1] == -1) word[a - 1] = i;
	}
	for (i = 0; i < 26; i++)
	{
		printf("%d ",word[i]);
	}
}