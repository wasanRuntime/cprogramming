#include <stdio.h>
/*
 * Funtion declaration
 */
int function_1(int x, int y);
double funtion_2(double x, double y)
{
	printf("Inside funtion_2\n");
        
	return (x - y);
}
int main()
{
	int x1 = 80;
	int y1 = 10;
	double x2 = 80.430;
	double y2 = 10.430;

	printf("%d + %d = %d\n", x1, y1, function_1(x1, y1));
	printf("%f + %f = %f\n", x2, y2, funtion_2(x2, y2));

	return 0;
}
int function_1(int x, int y)
{
	printf("Inside fuction_1\n");

	return (x + y);
}
