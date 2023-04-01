#include <stdio.h>
/*
 * This is fuction call by value
 * Learning about functions
 */
int func(int *a, int *b);
 void main()
{
	 int y = 10;
	 int x = 12;
	 func(&x,&y);
	 printf("Inside of main(Calling fuction)\n");
	 printf("x = %d and y = %d\n", x, y);
	 
 }
int func(int *a, int *b)
{
	*a = 7;
	*b = 9;
	printf("Inside func(Called fuction)\n");
	printf("x = %d and y = %d\n", *a, *b);
}

	
