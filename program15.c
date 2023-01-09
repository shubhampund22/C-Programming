/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	DisplayDigit
//  Description :      	to Display the digit
//  Input :             int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void DisplayDigit(int iValue1)
{
	int iDigit = 0;
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}
	printf("Digit are: \n");

	while(iValue1 != 0)
	{
		iDigit = iValue1%10;
		printf("%d\t",iDigit);
		iValue1 = iValue1/10;
	}
	
}


/////////////////////////////////////////////////////////////////////
// Write a program to display Digit
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	int iRet = 0; 
	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	DisplayDigit(iNo1);
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        123
//  Output :     3	2	1
//
//  Input :        6879
//  Output : 	9	7	8	6
//
/////////////////////////////////////////////////////////////////////