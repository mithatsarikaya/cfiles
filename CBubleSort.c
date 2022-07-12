#include <stdio.h>
#include <string.h>

void sortArray(int array[], int x){
		
		for(int i=0; i<x; i++)
		{
				for(int j=0; j<x; j++)
			{
				if(array[j]>array[j+1])
				{
					int a = array[j];
					array[j] = array[j+1];
					array[j+1] = a;
				}
			}
		}
		
	}

void printArray(int array[], int size)
	{
		//size = sizeof(array)/sizeof(array[0])
		
		for(int i=0; i<size; i++)
		{
				printf("%d ", array[i]);
		}
	}
	
	
int main(){
	
	int array[] = {2, 4, 1, 3, 7, 9, 5, 8, 6};
	int size = sizeof(array)/sizeof(array[0]);
	
	
	
	sortArray(array, size);
	printArray(array, size);
	
	//printf("%d", array[0]);
	
	
	
	
	
	
	
	
	
	}
