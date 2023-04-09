#include <stdio.h>
#include <time.h>
#include <string.h>
/*
 * Printint current time and date
 *Rewrite the program in Listing 15.2. This time use the format specifier %c, instead
of %s, to print out the character string of the local time on your computer. 
 *
 */
void get_date_time(void);
int main()
{
	printf("Print before the get_date_time() is called\n");
	get_date_time();
	printf("After get_date_time() is called\n");

	return 0;
}
void get_date_time(void)
{
	time_t now;
	int i;

	now = time(NULL);
	
	printf("the time now is %ld\n", time(&now));

	char time_now[30];
       	strcpy(time_now, asctime(localtime(&now)));
	printf("The time now is : ");
	for(i = 0; time_now[i]; i++)
	{
		printf("%c", time_now[i]);
	}
	printf("\n");
}	
