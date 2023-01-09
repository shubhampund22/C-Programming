/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_Pattern
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

void Display_Pattern(int iNo1, int iNo2)
{
	for(int j = 1; j <= iNo1; j++)
	{
		for(int i = 1; i <= iNo2; i++)
		{
			printf("%d\t",j);
		}
		printf("\n");	
	}
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display Number pattern
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1, iNo2 = 0;

	printf("Enter the row size : \n");
	scanf("%d",&iNo1);

	printf("Enter the column size : \n");
	scanf("%d",&iNo2);

	
	Display_Pattern(iNo1, iNo2);
	
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       2		2
//  Output :  	1	1
//				2	2
//
/////////////////////////////////////////////////////////////////////



