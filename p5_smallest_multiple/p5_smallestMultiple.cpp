#include <stdio.h>
#define MUL 20

int main()
{
	int i = 1;
	int j = 1;
	while (1)
	{
		while(j <= MUL)
		{
			if (i % j != 0)
			{
				j = 1;
				break;
			}
			else
			{
				j++;
			}

		}
		if (j == MUL + 1)
		{
			break;
		}
		i++;
	}
END:
	printf("the smallest multiple of all numbers less then %d is %d", MUL, i);
	getchar();
	return 0;
}