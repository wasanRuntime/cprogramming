#include <stdio.h>
#include <stdarg.h>
/*
 *  Declare and define a function, called MultiTwo(), that can perform multiplication
 *  on two integer variables. Call the MultiTwo() function from the main() function
 *  and pass two integers to MultiTwo(). Then print out the result returned by the
 *  MultiTwo() function on the screen.
 */
int MultiTwo(int num_arg, ...);
int main()
{
	int a, b, c, d, e;
	puts("Enter two numbers to multiply");
	scanf("%d %d", &a, &b);
        puts("Your Results");
	printf("%d x %d = %d\n", a, b, MultiTwo(2, a, b));

	puts("Enter two numbers to multiply");	        
	scanf("%d %d %d", &a, &b, &c);
	puts("Your Results");
	printf("%d x %d x %d = %d\n", a, b, c, MultiTwo(3, a, b, c));

	puts("Enter five numbers to multiply");
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	puts("Your Results");
	printf("%d x %d x %d x %d %d = %d\n", a, b, c, d, e, MultiTwo(5, a, b, c, d, e));

	return 0;
}
int MultiTwo(int num_arg, ...)
{
	va_list args;
	int i;
	int result = 1;
	va_start(args, num_arg);

	for(i = 0; i < num_arg; i++)
	{
		int new_arg = va_arg(args, int);
		result *= new_arg;
	}
	va_end(args);

	return result;
}
