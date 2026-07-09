#include<stdio.h>
int main()
{
	int i, j, k;
	
	for(i=1 ; i<=5 ; i++){ // Outer loop
		
		for(j=1 ; j <= 5 ; j++){ // 1st Inner loop
			
		if(j <= 5 - i){ // no. of spaces to be printed
			
			printf(" ");
		}
		
	}
		
		for(k=1 ; k<= 2 * i - 1 ; k++){ // 2nd inner loop for star printing
		
				printf("*");
				
		}
		
		printf("\n");
		
       }
       
          return 0;
          
	}
	

