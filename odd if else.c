#include <stdio.h>
int main()
{
	int a;
	
	printf("Enter the number:\t");
	scanf("%d",&a);
	
	if(a % 2 == 0){
		
		printf("The %d is an even number", a);
		
	}
	
	else{
		
		printf("The %d is an odd number", a);
		
	}
	
	return 0;
	
}

