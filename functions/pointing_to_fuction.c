#include <stdio.h>
/*Pointint to a fuction
 *
 */
int strPrint(char *str);
int main()
{
	char str[] = "Pointing to a function";
	int (*pointer_str)(char *str);

	pointer_str = strPrint;
	(pointer_str)(str);

	if(!(pointer_str)(str));
	puts("done");

	return 0;
}
int strPrint(char *str)
{
	printf("%s\n", str);
}

