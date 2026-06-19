#include <stdio.h>
int main()
{
	float area, peri, len, wid;
	
	printf("Enter the length of the rectangle:\t");
	scanf("%f",&len);
	
	printf("Enter the width of the rectangle:\t");
	scanf("%f",&wid);
	
	area = len * wid;
	printf("Enter the width of the rectangle:\t%.3f", area);
	
	peri = 2 * (len + wid) ;
	printf("\nThe perimeter of the rectangle:\t%.3f", peri);
	
	return 0;
}
