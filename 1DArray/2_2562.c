#include <stdio.h>
int	main(void)
{
	int i, max, cnt, num[9] = {};
	
	max = 0;
	cnt = 0;
	for(i = 0; i < 9; i++)
		scanf("%d", &num[i]);
	for(i = 0; i < 9; i++)
	{
		if(max < num[i])
		{
			max = num[i];
			cnt = i + 1;
		}
	}
	printf("%d\n%d\n", max, cnt);
	return 0;
}