#include <stdio.h>

int		main(void)
{
	int a;
	int b;

	scanf("%d%d", &a,&b);
	printf("%d\n", a*(b%10));
	printf("%d\n", a*((b/10)%10));
	printf("%d\n", a*((b/10)/10));
	printf("%d\n", a*b);
	return (0);
}
