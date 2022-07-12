#include <stdio.h>

int main(){
	
	int number = 0;
	int sum = 0;
	
	do{
		printf("\nEnter a number to sum: ");
		scanf("%d", &number);
		sum += number;
		printf("\nsum : %d", sum);
	}while (number > 0);


}
