#include <stdio.h>
/*
 * passing pointers to fuctions
 *
 */
char PrintChar(char *ch);
int DataAdd(int *list, int max);
int main()
{
	char str[] = "This is a String!";
	char *pointer_str;
	int list[] = {1, 2, 3, 4, 6};
	int *pointer_int;

	pointer_str = str;
	PrintChar(pointer_str);
	PrintChar(str);

	pointer_int = list;
	printf("The sum returned by DataAdd() is %d\n", DataAdd(pointer_int, 5));
	printf("The sum returned by DataAdd() is %d\n", DataAdd(list, 5));
	
	return 0;
}
char PrintChar(char *ch)
{
	printf("%s\n", ch);
}
int DataAdd(int *list, int max)
{
	int i;
	int sum = 0;

	for(i = 0; i < max; i++)
	{
		sum += list[i];
	}
	return sum;
}
