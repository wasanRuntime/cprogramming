#include <stdio.h>
/*
 * 3D arrays
 *Initializing and printing out
 */
int main()
{
	/*Declaring 3D dimension*/
	int three_dimen[5][10][4];
	/*intitializing i,j and k for loop iteration*/
	int i, j, k;

	
	for(i = 0; i < 5; i++)
	{
		printf("\n");
		for(j = 0; j < 10; j++)
		{
			printf("\n");
			for(k = 0; k < 4; k++)
			{
				/*Initializing three_dimen array with for loop*/
				three_dimen[i][j][k] = i + j * ( k +i) - (i + k);

				/*print out the arrays*/
			       printf("%6d", three_dimen[i][j][k]);
			}
		}
	}
	printf("\n");
	return 0;
}



