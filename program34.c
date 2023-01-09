/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_Pattern
//  Description :      	to Display star Pattern
//  Input :             int
//  Output :         	Pattern
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void Display_Pattern(int iNo)
{
	for(int j = 1; j <= iNo; j++)
	{
		printf("*\t");
	}
	printf("\n");
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display star pattern
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo= 0;

	printf("Enter the number that you want to print star: \n");
	scanf("%d",&iNo);

	
	Display_Pattern(iNo);
	
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       5
//  Output :    *	*	*	*	*
//
//  Input :     3
//  Output : 	*	*	*
//
/////////////////////////////////////////////////////////////////////


