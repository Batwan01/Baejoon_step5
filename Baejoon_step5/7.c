#include <stdio.h>

int main()
{
	int a,b;
	char arr[10] = { 0 };
	scanf("%[^\n]s", arr);
	a = (arr[6] - 48) * 100 + (arr[5] - 48) * 10 + arr[4] - 48;
	b = (arr[2] - 48) * 100 + (arr[1] - 48) * 10 + arr[0] - 48;
	if (a > b) printf("%d", a);
	else printf("%d", b);
}