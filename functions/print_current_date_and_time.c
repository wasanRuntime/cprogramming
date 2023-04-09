#include <stdio.h>
#include <time.h>
/*
 * Printint current time and date
 * 
 *
 */
void get_date_time(void);
int main()
{
	printf("Print before the get_date_time() is called\n");
	get_date_time();
	printf("After get_date_time() is called");

	return 0;
}
void get_date_time(void)
{
	time_t now;
	
	printf("the time now is %ld\n", time(&now));
	printf("The current date and time is %s\n", asctime(localtime(&now)));
}	
