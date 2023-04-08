#include <stdio.h>
/*fgets() and puts
 *from uppercacse to lower case
*
*/
int main()
{
	char str[100];
	int i = 0;
	int delt = 'a' - 'A';

	puts("Enter any string not more than 100");
	fgets(str, 100, stdin);

	while(str[i])
	{
		if((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += delt;
		}
		i++;
	}
	puts("The sentence you have enter has been converted touppercase and it is");
	puts(str);
	return 0;
}
