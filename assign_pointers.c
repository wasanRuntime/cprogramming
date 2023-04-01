#include <stdio.h>
/*
 * Declaring and assigning values to pointers
 * Betty coding style
 * Written by andrew wasan
 */
int main()
{
	char c, *pntr_c;
	int i, *pntr_i;
	float f, *pntr_f;
	c = 'Q';
	i = 78;
	f =2.4;
	
	printf("c: address = %p content = %c\n", &c, c);
	printf("i: address = %p content = %d\n", &i, i);
	printf("f: address = %p content = %f\n", &f, f);

	pntr_c = &c;
	printf("pntr_c: address = %p content = %p\n", &pntr_c, pntr_c);
	printf("*pntr_c: => %c\n", *pntr_c);

	pntr_i =&i;
	printf("pntr_i: address = %p content = %p\n", &pntr_i, pntr_i);
	printf("*pntr_i: => %d\n", *pntr_i);
        *pntr_f = f;
	printf("pntr_f: address = %p content = %p\n", &pntr_f, pntr_f);
        printf("*pntr_f => %f\n", *pntr_f);	

	return 0;
}

