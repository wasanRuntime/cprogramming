#include <stdio.h>
/*
 * Initializing strings
 *
 */
int main(){
	char str1[] = {'A', ' ', 'S', 't', 'r', 'i', 'n', 'g', ' ', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', '\0'};
	char str2[] = "Another String Constant";
	char *p;
	int i;

	/*print out str1[]*/
	for(i = 0; str1[i]; i++)
	{
	       printf("%c", str1[i]);
	}	       
	printf("\n");
	/*Printout str2*/
	for(i = 0; str2[i]; i++)
	{
		printf("%c", str2[i]);
	}
	printf("\n");
	/*Assign string to a pointer*/
	p = "Assign a string to the pointer";
	for(i = 0; *p; i++)
	{
		printf("%c", *p++);
	}
	printf("\n");

	return 0;
}
