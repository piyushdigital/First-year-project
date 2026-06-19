#include <stdio.h>
int main()
{
	int a, c, b, add, sub, mul, avg, div, mod;
	
	printf("Enter 1st number:\t");
	scanf("%d",&a);
	
	printf("Enter 2nd number:\t");
	scanf("%d",&b);
	
	add = a + b;
	printf("The addition of %d & %d:\t%d", a, b, add);
	
	sub = a - b;
	printf("\nThe subtraction of %d & %d:\t%d", a, b,sub);
	
	mul = a * b;
	printf("\nThe multiplication of %d & %d:\t%d", a, b, mul);
	
	avg = (a + b) / 2;
	printf("\nThe average of %d & %d:\t%d", a, b, avg);
	
	div = a / b;
	printf("\nThe division of %d & %d:\t%d", a, b, div);
	
	mod = a % b;
	printf("\nThe modulus of %d & %d:\t%d", a, b, mod);
	
	return 0;
}
