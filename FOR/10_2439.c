#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		for(int k = i; k < n; k++)
			printf(" ");
		for(int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}