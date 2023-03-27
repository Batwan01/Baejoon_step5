#include <stdio.h>

int main()
{
	int i, a=0;
	char static arr[1000000] = { 0 };
	scanf("%[^\n]s", arr);
	for (i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == 32) a++;
	}
	if (strlen(arr) == 0) printf("%d", 0);
	else if (strlen(arr) == 1 && arr[0] == 32) printf("%d", 0);
	else if (arr[0] == 32 && arr[strlen(arr) - 1] == 32) printf("%d", a - 1);
	else if (arr[0] == 32)	printf("%d", a);
	else if (arr[strlen(arr) - 1] == 32) printf("%d", a);
	else printf("%d", a + 1);
}