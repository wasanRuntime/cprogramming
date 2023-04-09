#include <stdio.h>
#include <stdarg.h>
/*
 * Rewrite the program in Listing 15.3 again. This time, print out all arguments
 * passed to the AddDouble() function. Does va_arg() fetch each argument in the
 * same order (that is, from left to right) of the argument list passed to AddDouble()?
 */
double AddDouble(double num_args, ...);
int main()
{
	printf("%f + %f +%f = %f\n", 2.3, 2.2, 3.2, AddDouble(3, 2.3, 2.2, 3.2));
	return 0;
}
double AddDouble(double num_args, ...)
{
	va_list args;
	int i;
	double result = 0;

	va_start(args, num_args);

	for(i = 0; i < num_args; i++)
	{
		double arg = va_arg(args, double);
		printf("The argument taken is %f and it is number %d\n", arg, i+1);
		result += arg;
	}
	va_end(args);
	return result;
}
