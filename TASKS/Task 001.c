#include <stdio.h>
/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf
*/
<<<<<<< HEAD

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if ((abc != 'e') && (abc != 'q'))
			printf("%c ", abc);
	}
	printf("\n");
	return (0);
}
=======
>>>>>>> 385f299811ed74b3ed32e00370842e8c63751350
