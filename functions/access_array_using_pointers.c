#include <stdio.h>
/*
 * Accessing arrays via pointer
 *
 */
int main()
{
	char str[] = "It's a string";
	char *pointer_1;
	int list[] = {1, 2, 3, 4, 5};
	int *pointer_2;
 
        pointer_1 = str;
	printf("Before change str contains: %s\n", str);
        printf("Before change str[5] contains: %c\n", str[5]);

	*(pointer_1 + 5) = 'A';
	printf("After change str contains: %s\n", str);
	printf("After change str[5] contains: %c\n", str[5]);

	pointer_2 = list;
        printf("Before change list[2] contains: %d\n", list[2]);
	*(pointer_2 +2) = -3;
        printf("After change list[2] contains: %d\n", list[2]);
	return 0;
}
