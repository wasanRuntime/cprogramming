#include <stdio.h>
/*
 * initializing an array
 * learning arrays
 */
int main(void)
{
	int i;
	int list_int[10];

	for(i = 0; i < 10; i++)
	{
		list_int[i] = i +1;
		printf("list_int[%d] is initialized with %d\n", i, list_int[i]);
	}
	return 0;
}
