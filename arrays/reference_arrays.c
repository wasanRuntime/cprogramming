#include <stdio.h>
/*
 * Referencing array with a pointer
 *
 */
int main(void)
{
	int *ptr;
	int list_num[10];
	int i;

	for(i = 0; i < 10; i++)
	{
		list_num[i] = i+1;
	}
	ptr = list_num;
	printf("the start address of array is %p\n", ptr);
	printf("The value of the first element is %d\n", *ptr);
	ptr = &list_num[0];
	printf("The address of first element is %p\n", ptr);
	printf("The value of first first element is %d\n", *ptr);
	return 0;
}
