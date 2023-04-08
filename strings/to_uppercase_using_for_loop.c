#include <stdio.h>
/*
 * Converting to uppercase using for loop
 * using fgets and puts
 */
int main()
{
	char str[70];
	int i;
	int delt = 'a' - 'A';

	puts("Enter string not more that 70 characters");
	fgets(str, 70, stdin);

	for(i = 0; str[i]; i++)
	{
		if((str[i] >= 'A') && (str[i] >= 'Z'))
		{
			str[i] -= delt;
		}
	}
	puts("After conversion to uppercase");
	puts(str);
	return 0;
}

