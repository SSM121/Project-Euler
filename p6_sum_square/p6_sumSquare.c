#include <stdio.h>
#include <math.h>
#define NAT 100
int main()
{
	int square = 0, sum = 0;
	for (int i = 1; i <= NAT; i++)
	{
		square += pow(i, 2);
	}
	for (int j = 1; j <= NAT; j++)
	{
		sum += j;
	}
	sum = pow(sum, 2);
	printf("For the first %d natural numbers, %d is the sum of squares and %d is the square of sums. Therfore %d is the difference. \n", NAT, square, sum, sum - square);
	getchar();
}