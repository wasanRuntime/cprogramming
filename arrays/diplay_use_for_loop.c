#include <stdio.h>
/*
 * Rewrite the program in Exercise 1, but this time use a for loop to initialize the
 * character array with ‘a’, ‘b’, ‘c’, ‘d’, and ‘e’, and then print out the value of
 * each element in the array.
 * char array_ch[5] = {‘A’, ‘B’, ‘C’, ‘D’, ‘E’};
 *
 */
int main()
{
	char array_ch[5];
	/*initialization and printing out*/
	char ch = 'a';
	for(int i = 0; i <5; i++)
	{
		/*Initialization*/
		array_ch[i] = ch + i;
		/*printing out*/
		printf("array_ch[%d] is %c\n", i, array_ch[i]);
	}
	return 0;
}

    
