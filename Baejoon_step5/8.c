#include <stdio.h>

int main()
{
	int i, a, sum = 0;
	char arr[1000] = { 0 };
	scanf("%s", arr);
	for (i = 0; i < strlen(arr); i++)
	{
		if (arr[i] - 64 >= 16 && arr[i] - 64 <= 19) a = 8;
		else if (arr[i] - 64 >= 23 && arr[i] - 64 <= 26) a = 10;
		else if ((arr[i] - 64) % 3 == 0) a = (arr[i] - 64) / 3 + 2;
		else if (arr[i] - 64 == 22) a = 9;
		else a = (arr[i] - 64) / 3 + 3;
		sum += a;
	}
	printf("%d", sum);
}