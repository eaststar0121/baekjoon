#include <stdio.h>
int main(void)
{
	int n, i, j = 0, cnt = 0;
	scanf("%d", &n);
	i = n;
	while(1)
	{
		j = i % 10;
		i = (i / 10) + (i % 10);
		i = (j * 10) + (i % 10);
		cnt++;
		if(n == i)
			break;
	}
	printf("%d\n", cnt);
	return 0;
}