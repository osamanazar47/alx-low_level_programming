#include <stdio.h>
/**
 * before_main - a function to executed before the main function is called
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
