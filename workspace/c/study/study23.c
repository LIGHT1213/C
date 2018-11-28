#include <stdio.h>
#include <math.h>
int main()
{
	int input_max, input_min, i, sum = 0;
	scanf("%d%d", &input_min, &input_max);
	for (i = input_min; i <= input_max; i++)
	{
		while (i / 10 > 0)
		{
			sum += pow(i % 10, 3);
			i = i / 10;
		}
		if (sum == i)
			printf("%d\n", i);
	}
	return 0;
}
