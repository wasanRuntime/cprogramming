#include <stdio.h>
/*
 * Given a character string, I like C!, write a program to pass the string to a function that displays the string on
 *
 */
int display(char *str1);
int main()
{
	char str[] = "I like C!";
	display(str);

}
int display(char *str1)
{
	printf("%s\n", str1);
}
