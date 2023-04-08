#include <stdio.h>
/*
 * Rewrite the program to convert all uppercase characters to
 * their lowercase counterparts.
 *
 */
int main()
{
	char str1[100];
	int i;
	int delt = 'a' - 'A';

	puts("Enter a sentesce or word not more than 100 characters");
	fgets(str1, 100, stdin);

	for(i = 0; str1[i]; i++)
	{
		if((str1[i] >= 'A') && (str1[i] <= 'Z'))
		{
			str1[i] += delt;
		}
	}
	puts("to upper case it will be:");
	printf("%s\n", str1);
	return 0;
}
