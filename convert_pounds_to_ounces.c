// 1 pound = 16 ounce
#include <stdio.h>
int main(){
	int weight_in_pounds, weight_in_ounces;
	printf("~ START PROGRAM ~\nEnter the weight in pounds: ");
	scanf("%d",&weight_in_pounds);
	
	while (weight_in_pounds>=0){
		weight_in_ounces = weight_in_pounds*16;
		printf("- The weight in pounds: %d\n",weight_in_pounds);
		printf("- The weight in ounces: %d\n",weight_in_ounces);
		printf("Enter the weight in pounds: ");
		scanf("%d",&weight_in_pounds);
	}
	printf("~ END OF PROGRAM ~");
	return 0;
}
