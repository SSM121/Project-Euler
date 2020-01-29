#include <stdio.h>
#define ROOF 4000000

int main()
{
	int t1, t2;
	t1 = 1;
	t2 = 1;
	int total = 0;
	int t;
	while (t2 <= ROOF)
	{
		t = t1 + t2;
//		printf("%d ", t);
		if (t % 2 == 0)
		{
			printf("%d ", t);
			total = total + t;
		}
		t1 = t2;
		t2 = t;
	}
	printf("\ntotal = %d \n", total);
		getchar();
}