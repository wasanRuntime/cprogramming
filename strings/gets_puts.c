#include <stdio.h>
#include <string.h>
/*
 * Using gets() and puts()
 * To uupper case
 */
int main()
{
	char str[80];
	int i;
	int delt = 'a' - 'A';
	i = 0;
	printf("Enter any string less than 80 character\n");
	fgets(str, 80, stdin);
	while(str[i])
	{
		if((str[i] >= 'a') && (str[i] <='z'))
				{
				   str[i] = str[i] - delt;
			        }
				 i++;
	}
	printf("The entered string in uppercase is\n");
	puts(str);
	printf("\n");
	return 0;
}

