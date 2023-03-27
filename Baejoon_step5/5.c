#include <stdio.h>

int main()
{
	int i, j, h, a, n=0, try=0;
	char arr[1000] = { 0 };
	scanf("%d", &try);
	for (i = 0; i < try; i++) 
	{
		scanf("%d %s", &n,arr);
		for (j = 0; j < strlen(arr); j++)
		{
			for (h = 0; h < n; h++)
			{
				printf("%c", arr[j]);
			}
		}
		printf("\n");
	}
}