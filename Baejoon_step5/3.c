#include <stdio.h>
#include <string.h>

int main()
{
	int i, n = 0;
	char name[999];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", name);
		printf("%c%c\n", name[0], name[strlen(name) - 1]);
	}
}