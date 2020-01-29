#include <stdio.h>
#define ROOF 1000

int main()
{

	long long int total = 1;

	for (int i = 1; i < ROOF + 1; ++i)
	{
		if ((i % 3) == 0)
		{
//			printf("%d \n", total);
			total = total + i;
		}
		else if ((i % 5) == 0)
		{
			total = total + i;
		}
	}
	printf("%d \n", total);
	getchar();
}