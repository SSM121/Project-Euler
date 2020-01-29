#include <stdio.h>
#include <math.h>
#define PRIME 600851475143
int isPrime(int Z);

int main()
{
	int j = 0;
	while (1)
	{
		for (auto i = 2; ; i++)
		{
			if (isPrime(i))
			{
				if (PRIME % i == 0)
				{
					j = i;
				}
				if (i >= sqrt(PRIME))
				{
					goto END;
				}
			}
		}
	}
END:
	printf("the highes prime factor is %d\n", j);
	getchar();
	return 0;

}

int isPrime(int z)
{
	for (auto i = 2; i <= sqrt(z); i++)
	{
		if (z % i == 0)
		{
			return 0;
		}
	}
	return 1;
}