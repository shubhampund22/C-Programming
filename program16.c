/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	CountDigit
//  Description :      	to Count  the digit
//  Input :             int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int CountDigit(int iValue1)
{
	int iCnt = 0;
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	while(iValue1 != 0)
	{
		iCnt++;
		iValue1 = iValue1/10;
	}
	return iCnt;
	
}


/////////////////////////////////////////////////////////////////////
// Write a program to Count Digit
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	int iRet = 0; 
	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	iRet = CountDigit(iNo1);
	printf("The count of digit is: %d\n", iRet);
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :      123
//  Output :     3
//
//  Input :     6879
//  Output : 	4
//
/////////////////////////////////////////////////////////////////////