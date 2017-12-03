// Using of Heap Pointers to store Data
// Author: Siddhartha Sadhukhan

#include<stdio.h>
#include<stdlib.h>

int *mysum(int *x, int *y)
{
	
// malloc function is use to block a memory block in heap which is use to store data permanently to the entire program lifecycle
	
	int* val=(int *)malloc(sizeof(int)); 
	*val=(*x)+(*y);
	return val;
}

main()
{
	int a,b;
	int *c;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("\nEnter the Second number: ");
	scanf("%d",&b);
	c=mysum(&a,&b);
	printf("\nAnswer: %d ",*c);
	getch();
}


