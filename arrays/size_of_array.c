#include <stdio.h>
/*
 * Size of array
 *
 */
int main(void)
{
	int total_byte;
	int list_num[10];

	total_byte = sizeof(int) * 10;
	printf("the size of int is %ld-bytes\n", sizeof(int));
	printf("the size of list_num[] is %d\n", total_byte);
	printf("the memory address of first element in array is %p\n", &list_num[0]);
	printf("the memory address of last element in array is %p\n", &list_num[9]);
	return 0;
}
