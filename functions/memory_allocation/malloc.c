#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Using malloc() function
 *
 */
int str_copy(char *str1, char *str2);
int main()
{
	char str[] = "Use malloc() to allocate memory.";
	char *pointer_str;
	int result;

	pointer_str = malloc(strlen(str)+1);

	if(pointer_str  != NULL)
	{
		str_copy(str, pointer_str);
		printf("The string pointed by pointer_str is: %s\n", pointer_str);
		 return 1;
	}
	else
	{
		puts("Malloc() function failed");
		result = 0;

	}
	return result;
}
int str_copy(char *str1, char *str2)
{
	int i;
	for(i = 0; str1[i]; i++)
	{
		str2[i] = str1[i];
	}
	str2[i] = '\0';
	return 0;
}
