#include <stdio.h>
int main()
{
	int num1,num2,sum_1,sub_2,mul,div,total_3,avg;
	printf("Enter First number:\t");
	scanf("%d",&num1);
	printf("Enter Second number:\t");
	scanf("%d",&num2);
	sum_1=num1+num2;
	printf("The addition of %d and %d is: %d",num1, num2,sum_1);
	sub_2=num1-num2;
	printf("\nThe subtraction of %d and %d is: %d",num1,num2,sub_2);
	mul=num1*num2;
	printf("\nThe multiplication of %d and %d is: %d",num1, num2,mul);
	div=num1/num2;
	printf("\nThe Division of %d and %d is: %d",num1, num2,div);
	avg=sum_1/2;
	printf("\nThe Averageof %d and %d is: %d",num1,num2,avg);
    total_3=sum_1+sub_2;
	printf("\nThe Addition of %d and %d is: %d",sum_1,sub_2,total_3);
	return 0;
}
