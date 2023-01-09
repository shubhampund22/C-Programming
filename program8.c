/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	DisplayFactors
//  Description :      	to print the factors of number
//  Input :             int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactors(int iValue1)
{

	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}
	printf("Factors Are:\n");
	for(int i = 1; i < (iValue1/2)+1; i++)
	{
		if((iValue1%i) == 0)
		{
			printf("%d\t",i);
		}
	}
	
}

/////////////////////////////////////////////////////////////////////
// Write a program to perform display factors operation
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	DisplayFactors(iNo1);

	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        5
//  Output :     	1
//
//  Input :        -10
//  Output :       5	2	1
//
/////////////////////////////////////////////////////////////////////