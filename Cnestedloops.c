//will be back for this problem. i need to clear \n from buffer. Most probably problem is related to version

#include <stdio.h>
int main()
{
   //nested loop = a loop inside of another loop

   int rows;
   int columns;
   char symbol;

   printf("\nEnter # of rows: ");
   scanf("%d", &rows);

   printf("Enter # of columns: ");
   scanf("%d", &columns);

   scanf("%c"); //clears \n from buffer

   printf("Enter a symbol to use: ");
   scanf("%c", &symbol);

   for(int i = 1; i <= rows; i++)
   {
      for(int j = 1; j <= columns; j++)
      {
         printf("%d", j);
      }
      printf("\n");
   }

   return 0;
}









/*
#include <stdio.h>

int main(){
	
	int row;
	int column;
	char symbol;
	
	printf("Enter number for row: ");
	scanf("%d", &row);
	
	printf("Enter number for column: ");
	scanf("%d", &column);
	
	scanf("%c");
	
	
	printf("Enter a symbol to show: ");
	scanf("%c", &symbol);
	
	printf("%c", symbol);
	
	for(int i = 1; i<=row; i++)
	{
		
		for(int j = 1; j<=column; j++){
			
			//printf("%d", j);
			printf("%c", symbol);
			
			}
		printf("\n");
	}
	
	}
*/
