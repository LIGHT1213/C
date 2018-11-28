#include <stdio.h>
main()
{
	int x;
	for (x=11;;x++)
	{
		if (x%5==1&&x%6==5&&x%7==4&&x%11==10)
		{
			printf("%d",x);
			break;
		}
	}
}
