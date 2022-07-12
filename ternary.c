#include <stdio.h>

int findMax(int x, int y){
	/*
	if (x > y){
		return x;
		}
	else if (x == y){
		printf("number are same, bruh");
		}
	else{
		return y;
		}
	*/
	return(x > y) ? x : y;
	//(condition) ? value if true : value if false
		
	}


int main(){
		
		int b = findMax(5,4);
		printf("%d",b);
		
		return 0
}
