// Program to implement of Pointers in 2D Array

#include<stdio.h>
#include<stdlib.h>
main()
{
	int A[2][3];  // Creating two one dimensional array with three element each(array of array)
	int i,j;
	int (*pt)[3]=A;  // Pointer to use 
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter the Elements: ");
			scanf("%d",*(A+i)+j);
		}
	}
	printf("%d\n",*(A+1)+2);  // Calculating address of A[0][0]+12bytes+8bytes where integer take as size of 4bytes
	printf("%2d\n",*(A+1)+3); // Calculating address of A[0][0]+12bytes+12bytes where integer take as size of 4bytes
	printf("%2d\n",*(A)+1);   // Calculating address of A[0][0]+4bytes where integer take as size of 4bytes
	printf("%d",*(*A+1));    // Value of 2nd element in array A[0][1]
	
}
