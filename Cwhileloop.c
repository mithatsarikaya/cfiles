#include <stdio.h>

#include <string.h>

int main(){
	
	char name[25];
	printf("\nWhat is your name?: ");
	fgets(name, 25, stdin);
	name[strlen(name)-1] = '\0';
	
	while(strlen(name) == 0){
		printf("\nYou did not enter your name");
		printf("\nWhat is your name?: ");
		fgets(name, 25, stdin);
		name[strlen(name)-1] = '\0';
		}
	//printf("%d", strlen(name));
	printf("\nHello %s",name);
}
