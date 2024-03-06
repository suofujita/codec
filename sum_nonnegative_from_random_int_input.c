#include <stdio.h>
int main(){
	int x,i=1,sum = 0;
	printf("~ START PROGRAM ~\n\n");
	printf("Enter interger: ");
	scanf("%d",&x);
	
	while(x>=0){
		sum = sum + x;
		i++;
		printf("Enter next integer: ");
		scanf("%d", &x);
	}
	
	printf("Sum of all the nonnegative integers entered: %d\n", sum);
	printf("\n\n~ END OF PROGRAM ~");
	return 0;
}
