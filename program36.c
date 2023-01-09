/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_NRPattern
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

void Display_NRPattern(int iNo)
{
	for(int j = iNo; j >= 1; j--)
	{
		printf("%d\t",j);
	}
	printf("\n");
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display Number revsre pattern
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo= 0;

	printf("Enter the number that you want to print : \n");
	scanf("%d",&iNo);

	
	Display_NRPattern(iNo);
	
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       5
//  Output :   5	4	3	2	1
//
//  Input :     3
//  Output : 	3	2	1
//
/////////////////////////////////////////////////////////////////////


