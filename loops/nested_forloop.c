#include <stdio.h>
/*
*Nested loop to print stars
*loops
*/
int main(){
	int i, j;
	for (i = 1; i<=7; i++)
	{
		for(j=1; j<=4; j++){
			printf("*");
		}
		printf("\n");
	}
}
