#include <stdio.h>
/*
 *  Given a two-dimensional character array, str, that is initialized as
 *  char str[2][15] = { “You know what,”, “C is powerful.” };
 *  write a program to pass the start address of str to a function that prints out the
 *  content of the character array
 *
 */
int display(char (*str1)[15], int x);
int main()
{
	char str[2][15] = { "You know what,", "C is powerful." };
	display(str, 2);
		return 0;
}
int display(char (*str1)[15], int x)
{
	 for (int i = 0; i < x; i++)
	 {
		printf("%s\n", str1[i]);
	 }
}
