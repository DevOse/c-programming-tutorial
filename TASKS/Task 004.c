#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

/* Write your program after the comment
Write a program that asks and reads the following input from a use;
Your name
Your age
and then displays; Your name is 'name' and you are 'age' years old.

Example;
what is your name: David
How old are you?: 65

Output:
Your name is David and you are 65 years old.

*/

int main(void)
{
	char name[25];
	int age;

	printf("Enter your name: \n");
	scanf("%s", name);
	printf("Enter your age: \n");
	scanf("%d", &age);

	printf("Your name is %s and you are %d years old.\n", name, age);
	return (0);
}
