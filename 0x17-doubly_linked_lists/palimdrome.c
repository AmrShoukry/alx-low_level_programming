#include <stdio.h>

int main(void)
{
	int i, j, number, number_copy, number_reversed, accepted, max = 1;

	for (i = 999; i >= 100; i--)
	{
		for (j = i; j >= 100; j--)
		{

			number = i * j;
			number_copy = number;
			number_reversed = 0;
			accepted = 1;

			while (number_copy > 0)
			{
				number_reversed = number_reversed * 10 + number_copy % 10;
				number_copy = number_copy / 10;
			}
			number_copy = number;
			while (number_copy > 0)
			{
				if (number_copy % 10 != number_reversed % 10)
				{
					accepted = 0;
					break;
				}
				number_copy = number_copy / 10;
				number_reversed = number_reversed / 10;
			}
			if (accepted == 1)
			{
				max = i * j > max ? i * j : max;
			}
		}
		if (accepted == 1)
		{
			max = i * j > max ? i * j : max;
		}
	}

	printf("i: %i, j: %i, result: %i\n", i, j, max);

	return (0);
}
