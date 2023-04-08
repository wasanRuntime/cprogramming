#include <stdio.h>
#include <string.h>
/*Compymg string using strcpy and withoutusing is
 *
 */
int main()
{
	char str1[] = "Copy a string";
	char str2[15];
	char str3[15];
	int i;
        
	/*using strcpy()*/
	strcpy(str2, str1);
 
	/*without stcpy*/
	for(i = 0; str1[i]; i++)
	{
		str3[i] = str1[i];
	}
	str3[i] = '\0';
	/*display results*/
	printf("Contet of str2 copied by strcpy() is %s\n", str2);
	printf("Contet of str2 copied without using strcpy() is %s\n", str3);
	return 0;
}

