// Program to pass charecter pointer to the Function
// Author: Siddhartha Sadhukhan
#include<stdio.h>
#include<stdlib.h>
void print(char* ch)
{
	int i;
	while(*(ch+i)!='\0') // Iterate until the pointer hit to the \0
	{
	printf("%c",*(ch+i));
	i++;
	}
	printf("\n");
	}

main()
{
	
	char name[]="This is a String";
	print(name);
}
