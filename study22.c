#include <stdio.h>
int main()
{
	int input_f, cl_5f, cl_2f, cl_1f;
	scanf("%d", &input_f);
	input_f = input_f - 8;
	for (cl_5f = 0; cl_5f <= 18; cl_5f++)
	{
		for (cl_2f = 0; cl_2f <= 46; cl_2f++)
		{
			for (cl_1f = 0; cl_1f <= 92; cl_1f++)
			{
				if (cl_5f + cl_2f + cl_1f = 92)
				{
					printf("%d+%d+%d=%d", cl_5f, cl_2f, cl_1f, input_f);
				}
			}
		}
	}
	return 0;
}
