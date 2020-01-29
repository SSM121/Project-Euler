#include <stdio.h>
#define PRIME 10001


int main()
{
	int k = 0, num = 0, m = 0;
	for (int i = 1; m < PRIME; i++)
	{
		k = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j != 0)
			{
				k++;
				
			}

		}
		if (k + 2 == i)
		{
			m++;
			num = i;
		}
	}
	printf("The %d prime number is: %d \n", PRIME, num);
	getchar();
}