#include <stdio.h>
/*
 * Ending output of null
 * Stoppig at null character
 *
 */
int main(void)
{
	char my_char[15] = {'C', ' ', 'i' , 's', ' ', 'P', 'o', 'w', 'e', 'r', 'f', 'u', 'l', '!'} ;
	int i;
	/*printing with %c identifier*/
	printf("Method ONE\n");
	for(i = 0; i < 15; i++)
	{
		printf("%c", my_char[i]);
	}
	/*printing usng %s idetifier*/	
	printf("\nMethod TWO\n");
	printf("%s\n", my_char);
	return 0;
}
