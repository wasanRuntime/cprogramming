#include <stdio.h>
/*
 * Rewrite the program in Listing 16.7. This time, the array of pointers is initialized
 * with the following strings:
 * “Sunday”, “Monday”, “Tuesday”, “Wednesday”, “Thursday”, “Friday”, and
 * “Saturday”
 *
 */
int display1(char **str1, int size);
int main()
{
	char *str[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

	int i, size = 7;
	display1(str, size);

	return 0;
}
int display1(char **str1, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%s\n", *(str1+i));
	}
}
