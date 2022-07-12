#include <stdio.h>

int main(){
	
	double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};
	
	//printf("$%.2lf", prices[0]);
	
	// Another way of creating array:
	/*
	 * double prices[];
	 * 
	 * prices[0] = 1;
	 * prices[1] = 2;
	 * prices[2] = 3;
	 * prices[3] = 4;
	 * */
	
	//we have 6 DOUBLE elements. Each double element 8 bytes. Since we have 6 elements size of prices will be 48 bytes. So we do like below. i miss python lol
	
	for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
		
		printf("$%.2lf\n", prices[i]);
		
		}
	
	printf("*****************************************************************\n");
	
	int numbers[][3] = {
						{1, 2, 3},
						{4, 5, 6},
						{7, 8, 9},
						{10, 11, 12}
						};
	
	printf("%d\n", numbers[0][1]);
	
	int row = sizeof(numbers)/sizeof(numbers[0]);
	int col = sizeof(numbers[0])/sizeof(numbers[0][0]);
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("%d", numbers[i][j]);
		}
		printf("\n");
	}
	
	
	//printf("row number is: %d\n", sizeof(numbers)/sizeof(numbers[0]));
	//printf("col number is: %d", sizeof(numbers[0])/sizeof(numbers[0][0]));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
