#include <stdio.h>
/**********************************************
function: main
summary: runs through all of the 3 digit numbers and multiplies them. It then
finds the reverse and sees if they are equal which would make them a palidrom
and if it is a palidrom ir is comparred to the current biggest and if it is bigger it replaces it

*/
int reverse(int i);
int main()
{
	int rev, temp;
	int high_rev, high_k, high_l;
	high_rev = 0;
	for (auto k = 100; k <= 999; k++) //2 for loops to itterate the 2 variables being multiplied
	{
		for (auto l = 100; l <= 999; l++)
		{
			temp = k * l;
			rev = reverse(temp);
			if (rev == temp) //is true on palidrom over 100,000
			{
				if (high_rev < temp)//checks wether the new palidrom is bigger then the old one
				{
					high_rev = temp;
					high_k = k;
					high_l = l;
				}
			}
		}

	}
	printf("The Highest palidrom is: %d \nWe get this from %d * %d", high_rev, high_k, high_l);
	getchar();
	return 0;
}





/******************************************
function: reverse
summary: reverses a 6 digit number
i/o: takes in a number and outputs the reverse.
*/

int reverse(int i)
{
	int rev, temp;
	temp = i;
	rev = 0;
	for (auto j = 1; j <= 6; j++) //goes through each of the 6 digits and reverse them
	{
		temp = i % 10;
		switch (j) //switch the addition depending on which part of the loop you are in.
		{
		case 1:
			rev = rev + 100000 * temp;
			break;
		case 2:
			rev = rev + 10000 * temp;
			break;
		case 3:
			rev = rev + 1000 * temp;
			break;
		case 4:
			rev = rev + 100 * temp;
			break;
		case 5:
			rev = rev + 10 * temp;
			break;
		case 6:
			rev += temp;
			break;

		}
		i /= 10;
	}
//	rev += temp;
	return rev;
}