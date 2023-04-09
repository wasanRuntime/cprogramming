#include <stdio.h>
/*
 *  Declare and define a function, called MultiTwo(), that can perform multiplication
 *  on two integer variables. Call the MultiTwo() function from the main() function
 *  and pass two integers to MultiTwo(). Then print out the result returned by the
 *  MultiTwo() function on the screen.
 */
int MultiTwo(int x, int y);
int main()
{
	int a, b;
	puts("Enter two numbers to multiply");
	scanf("%d %d", &a, &b);

        puts("Your Results");
	printf("%d x %d = %d\n", a, b, MultiTwo(a, b));

	return 0;
}
int MultiTwo(int x, int y)
{
	return (x * y);
}
