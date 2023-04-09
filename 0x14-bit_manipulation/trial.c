#include <stdio.h>

int main(void)
{
	char value;
	int number;
	char c;

	for (number = 0; number < 4; number++)
	{
		value = (0x46c6f48U >> ((number & 3) << 3) & 0xff);
		printf("%c:%d\n", value,value);
	}
	printf("\n");
	return (0);
}
