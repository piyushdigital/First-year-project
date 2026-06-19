#include <stdio.h>
int main()

{
	float rad, area, peri;
	
	printf("Enter the radius of the circle:\t");
	scanf("%f",&rad);
	
	area = 3.14 * (rad * rad);
	printf("The Area of the circle:\t%.3f", area);
	
	peri = 2 * 3.14 * rad;
	printf("\nThe Perimeter of the circle:\t%.3f", peri);
	
	
	return 0;
}
