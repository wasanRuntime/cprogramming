#include <stdio.h>
/*
 * Passing multidimensional arrays to fuctions
 *
 */
int DataAdd1(int list[][5], int max1, int max2);
int DataAdd2(int *list, int max1, int max2);
int main()
{
	int list[2][5] = {1, 2, 3, 4, 5,
		          5, 4, 3, 2, 1};
	int *pointer_list;
	printf("The result returned by DataAdd1() is %d\n", DataAdd1(list, 2, 5));

	pointer_list = &list[0][0];
	printf("The result returned by DataAdd2() is %d\n", DataAdd2(pointer_list, 2, 5));

	return 0;
}
int DataAdd1(int list[][5], int max1, int max2)
{
	int i, j;
	int sum = 0;

	for(i = 0; i < max1; i++)
	{
		for(j = 0; j < max2; j++)
		{
			sum += list[i][j];
		}
	}
	return sum;
}
int DataAdd2(int *list, int max1, int max2)
{
	int i, j;
	int sum = 0;

	for(i = 0; i < max1; i++)
	{
		for(j = 0; j < max2; j++)
		{
			sum += *(list + i*max2 + j);
		}
	}
	return sum;
}
