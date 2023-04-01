#include <stdio.h>
/*
 * This is function definition and declaration
 * learning fuctions
 */
void sum(void);
void main(){
	sum();
}
void sum(void){
	int a,b,sum;
	printf("Enter two numbers to culculate sum");
	scanf("%d%d",&a,&b);
	sum = a + b;
	printf("The sum of %d and %d is %d\n",a,b,sum);
}
