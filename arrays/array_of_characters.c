#include <stdio.h>
/*printing out an array of characters
 *
 */
int main()
{
	char my_char[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
	int i;

	for(i = 0; i < 7; i++)
	{
		printf("the value in my_char[%d] is %c\n", i, my_char[i]);
	}
	/*Method II*/
	printf("Method one of putting all elements together\n");
	for(i = 0; my_char[i] !='\0' && i < 7; i++)
	{
		printf("%c", my_char[i]);
	}
	/*Method two*/
	printf("\nMethod two of putting all elements together\n");
	printf("%s\n", my_char);

	return 0;
}
