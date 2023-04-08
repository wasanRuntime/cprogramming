#include <stdio.h>
/*
*Write a program that uses the scanf() function to read in two integers entered by
*the user, adds the two integers, and then prints out the sum on the screen 
*
*/
int main()
{
	int i, j, k;

	puts("Enter two integers to add");
	scanf("%d %d", &i, &j);

	k = i + j;

	printf("The sum of %d and %d is equal to %d\n", i, j, k);
	return 0;
}
