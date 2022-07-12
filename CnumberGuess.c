#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int number2;
	int numberg = (rand() % 98) +1;
	
	
	//printf("%d\n", numberg);
	
	
	do{
		printf("Enter a number to find the lucky number: ");
		scanf("%d", &number2);
		if (numberg == number2)
		{
			printf("Well doneeeee!!!!!!heal yeahhhhhhhwowaowowoawowoow\n");
		}
		else if(number2 > numberg)
		{
			printf("your number is higher!!!\n");
		}
		else
		{
			printf("your number is lower!!!\n");
		}
	}while(numberg != number2);
	
	
	
	//printf("%d", number2);
	/*
	if(numberg == number2)
	{
		printf("hell yeah");
	}
	* */
}
