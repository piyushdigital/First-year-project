/*
	    *
	   ***
	  *****
	 *******
	*********
	
	Row=5
	star are increasing in odd no. 
*/

#include<stdio.h>
int main()
{
	int i, j, k;
	
	for(i=1 ; i<=5 ; i++){  // outer loop
		for(k=1 ; k<=5-i; k++){  // space loop 
			
				printf(" ");
				
			}
		
		for(j=1 ; j<=2*i-1 ; j++){  //star loop
			
			printf("*");
			
		}
		
		printf("\n");
		
	}
	return 0;
}
