#include <stdio.h>
/*
 *Printing out two dimensional arrays
 *
 */
int main()
{
	int two_dimen[3][5] = {{2,4,6,8,9}, {12,14,16,18,19},{20, 22, 24, 26, 28}};
	int i, j;

		for(i = 0; i < 3; i++)
		{
         		printf("\n");
			for(j = 0; j < 5; j++)
			{
				printf("%6d", two_dimen[i][j]);
			}
		}
		printf("\n");
		return 0;
	}

