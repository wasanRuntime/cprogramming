#include <stdio.h>
/*
 * how to print out 2D arrays
 *
 */
int main()
{
	int my_2d[4][3] = {1,3,5,7,9,1,3,5,7,1,3,7};
	int i, j;

	for(i = 0; i < 4; i++)
	{
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			printf("%4d", my_2d[i][j]);
		}
	}
	 printf("\n");
	 return 0;
}
