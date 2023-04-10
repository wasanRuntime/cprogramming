#include <stdio.h>
/*
 * Pointer subtraction
 *
 */
int main()
{
	int *pointer_1, *pointer_2;
	int x = 8;
	pointer_1 = &x;
	
	printf("The value of pointer_1 %p\n", pointer_1);
	pointer_2 = pointer_1 + 5;
	printf("The value of pointer_2 after adding 5 is %p\n", pointer_2);

	printf("pointer_2 - pointer_1 = %ld\n", pointer_2 - pointer_1);

        pointer_2 = pointer_1 - 5;
	printf("The value of pointer_2 after substracting 5 is %p\n", pointer_2);
        printf("pointer_2 - pointer_1 = %ld\n", pointer_2 - pointer_1);	

	return 0;
}
