#include <stdio.h>
/*
 *  Using an Array of Pointers to Character Strings
 *
 */
char strPrint1(char **str1, int size);
char strPrint2(char *str2);
int main()
{
	char *str[] = {"There’s music in the sighing of a reed.;",
		        "There’s music in the gushing of a rill.;",
			"There’s music in all things if men had ears;",
		        "There earth is but an echo of the spheres.\n\n\n"
                	};
	int i, size = 4;
	strPrint1(str, size);

	for(i = 0; i < size; i++)
	{
		strPrint2(str[i]);
	}
	return 0;
}
char strPrint1(char **str1, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%s\n", str1[i]);
	}
}
char strPrint2(char *str2)
{
	printf("%s\n", str2);
}
