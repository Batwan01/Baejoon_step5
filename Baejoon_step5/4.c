#include <stdio.h>

int main()
{
	int i, n, a,sum=0;
	char name;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		a = getchar();
		sum += a;
	}
	printf("%d", sum);
}