#include <stdio.h>
#include <stdarg.h>
/**
 *  Processing variable arguments *
 *
 */
double  add_double(int x, ...);
int main()
{
	double d1 = 2.2;
	double d2 = 1.5;
	double d3 = 3.4;
	double d5 = 4.0;

	double result1 = add_double(3, d1, d2, d3);
	printf("%f + %f + %f = %f\n", d1, d2, d3, result1);
	return 0;

}
double add_double(int x, ...)
{
	va_list arglist;
	int i;
	double result = 0.0;

	va_start(arglist, x);

	for (i = 0; i < x; i++)
	{
		result += va_arg(arglist, double);
	}
	va_end(arglist);
	return result;
}
