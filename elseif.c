#include <stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	if (age < 100 ){
		printf ("You are pretty young!\n");
	}
	else if (age == 100) {
		printf("You are old\n");
	}
	else {
		printf("You are really old\n");
	}
         printf("This id because your age is %d",age);
	return 0;
}
