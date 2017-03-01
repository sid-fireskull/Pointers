// Program to implement of Pointers in 1D Array

#include<stdio.h>
#include<stdlib.h>
main()
{
	int A[4];
	int *pt; // Declaring Integer pointer
	int i;
	pt=A;
	printf("%d", sizeof(A));
	for(i=0;i<4;i++){
		printf("Enter the elements: ");
		scanf("%d",pt+i);
		
	}
	
	printf("All input loaded successfully");
	for(i=0;i<4;i++)  						
	{
		printf("%3d",*(pt+i));    // Use the integer pointer to print the values in the array
		
	}
	
	
}
