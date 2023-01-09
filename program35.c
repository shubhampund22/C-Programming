/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_NPattern
//  Description :      	to Display Number Pattern
//  Input :             int
//  Output :         	Pattern
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void Display_NPattern(int iNo)
{
	for(int j = 1; j <= iNo; j++)
	{
		printf("%d\t",j);
	}
	printf("\n");
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display Number pattern
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo= 0;

	printf("Enter the number that you want to print : \n");
	scanf("%d",&iNo);

	
	Display_NPattern(iNo);
	
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       5
//  Output :    1	2	3	4	5
//
//  Input :     3
//  Output : 	1	2	3
//
/////////////////////////////////////////////////////////////////////


