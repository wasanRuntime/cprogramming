#include <stdio.h>
/*Nested do while loop
 *learning about loops
 */
int main(){
	int i = 1; int j =3;
	do{
		do{
			printf("%d",j);
			j--;
		}while(j>6);
		i++;
		printf("%d\n",i);
	}while(i<4);
	return 0;
}
