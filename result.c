#include<stdio.h>
int main(){
	
	float phy , chem , maths , bio , eng , it, total, average, percentage;
	
	printf("Enter English:\t");
	scanf("%f", &eng);
	
	printf("Enter Mathematics & Statistics:\t");
	scanf("%f", &maths);
	
	printf("Enter Physics:\t");
	scanf("%f", &phy);
	
    printf("Enter Chemistry:\t");
	scanf("%f", &chem);
	
    printf("Enter Biology:\t");
	scanf("%f", &bio);
	
	printf("Enter Information Technology:\t");
	scanf("%f", &it);
	
	total= phy + chem + maths + bio + eng + it;
	printf("\ntotal= %.3f", total);
	 
	average= (total)/6;
	printf("\naverage= %.3f", average);
	
	percentage = (total/600)*100;
	printf("\npercentage= %.2f", percentage);
	
	return 0;
	
}
