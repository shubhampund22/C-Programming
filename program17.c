/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	SumDigit
//  Description :      	to addition of  the digit
//  Input :             int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int SumDigit(int iValue1)
{
	int iSum, iDigit= 0;
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	while(iValue1 != 0)
	{
		iDigit = iValue1%10;
		iSum = iSum + iDigit;
		iValue1 = iValue1/10;
	}
	return iSum;
	
}


/////////////////////////////////////////////////////////////////////
// Write a program to addition the Digit
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	int iRet = 0; 
	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	iRet = SumDigit(iNo1);
	printf("The Sum of digit is: %d\n", iRet);
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :      123
//  Output :     6
//
//  Input :     6879
//  Output : 	30
//
/////////////////////////////////////////////////////////////////////