#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	//without this line, random numbers are always same
	srand(time(0));
	
	int number1 = (rand() % 6) +1;
	int number2 = (rand() % 6) +1;
	int number3 = (rand() % 6) +1;
	
	printf("%d\n", number1);
	printf("%d\n", number2);
	printf("%d\n", number3);
	
	
	}
