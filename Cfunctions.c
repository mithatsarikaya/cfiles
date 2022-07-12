#include <stdio.h>

void birthday(char x[], int y)
{
	printf("\nHappy birthday dear %s!", x);
	printf("You are %d years old", y);


}

int main(){
	
	char name[] = "Behlul";
	int age = 18;
	birthday(name, age);


}
