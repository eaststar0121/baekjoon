#include <stdio.h>
int main(void)
{
	int x, n, i;
	scanf("%d %d", &n, &x);
	int a[n];
	for(i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for(i = 1; i <= n; i++)
		if(a[i] < x)
			printf("%d ", a[i]);
	return 0;	
}

