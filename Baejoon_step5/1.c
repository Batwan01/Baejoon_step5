#include <stdio.h>

int main()
{
	int i, a;
	char arr[1000] = { 0 };
	scanf("%s %d", arr,&a);
	printf("%c", arr[a-1]);
}