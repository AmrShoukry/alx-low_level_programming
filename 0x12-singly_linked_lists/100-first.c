void beforeMain __attribute__ ((constructor));

/**
 * beforeMain - function
 *
 * Description: print
 *
 * Return: Always (0);
 */


void beforeMain(void)
{
	char *string = "You're beat! and yet, ";

	printf("%syou must allow,\nI bore my house upon my back!\n", string);
}
