#include <stdio.h>

int		main(void)
{
	int i;
	int j;
	int a;
	int b;

	scanf("%d", &j);
	for(i = 0; i < j; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d", a+b);
	}
	return 0;
}
