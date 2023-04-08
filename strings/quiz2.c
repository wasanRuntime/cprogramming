#include <stdio.h>
#include <string.h>
/*
 *  Write a program to measure the length of a string by evaluating the elements in a
 *  character array one by one until you reach the null character. To prove you get the
 *  right result, you can use the strlen() function to measure the same string again.
 *
 */
int main()
{
	char str1[] = "This is exercise 2";
	int i, j;
	j = 1;

	for(i = 1; str1[i]; i++)
	{
		if(str1[i] != '\0')
		{
			j++;
		}
	}

	printf("The length of str1 using for loop is %d\n", j);
	printf("The lenght of str1 usint strlen is %lu\n", strlen(str1));

	return 0;
}
