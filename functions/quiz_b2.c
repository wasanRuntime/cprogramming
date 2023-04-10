#include <stdio.h>
/*
 *  Rewrite the program in exercise 1. This time, change the string of I like C! to I
 *  love C! by moving a pointer that is initialized with the start address of the string
 *  and updating the string with new characters. Then, pass the updated string to the
 *  function to display the content of the string on the screen.
 *
 */
int display(char *str1);
int main()
{
	char str[] = "I like C!";
	char *pointer;
	pointer = str;

	display(str);
	*(pointer + 3) = 'o';
	*(pointer + 4) = 'v';
	display(str);

	return 0;
}
int display(char *str1)
{
	printf("%s\n", str1);
}
