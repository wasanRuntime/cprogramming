#include <stdio.h>
/*
 * Myfirstrecursion program
 * Printing alphabets
 */
//void print_char(char c);
void print_alphabet_from(char c);
void print_alphabets();
/*void print_char(char c)
{
	write(1,&c,1);
}*/
void print_alphabet_from(char c)
{
	if(c > 'z')
	{
		return;
	}
	putchar(c);
	putchar(' ');
	print_alphabet_from(c+1);
}
void print_alphabets(void)
{
	print_alphabet_from('c');
}
int main(void)
{
	print_alphabets();
	putchar('\n');
	return 0;
}
