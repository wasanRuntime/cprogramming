#include <stdio.h>
#include <string.h>
/*
*Given a character array in the following statement,
*char str1[] = “This is Exercise 1.”;
*write a program to copy the string from str1 to another array, called str2.
*/
int main()
{
	char str1[] = "This is Exercise 1";
	char str2[19];
	printf("size of str1[] is %lu\n", strlen(str1));
	str2[19] = strcpy(str2, str1);
	printf("str2 = %s\n", str2);
	return 0;
}
