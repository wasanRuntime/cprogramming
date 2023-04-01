#include <stdio.h>
/*
 * This is a nested while loop
 * learning about loops
 */
int main(){
	int i =1;
	while(i<=3){
		int j = 1;
		while(j<=6){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
