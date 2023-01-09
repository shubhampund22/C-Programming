/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Revese_Number
//  Description :      	to Display the revese number
//  Input :             int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int Revese_Number(int iValue1)
{
	int iDigit= 0;
	int iRev = 0;
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	while(iValue1 != 0)
	{
		iDigit = iValue1%10;
		iRev = (iRev * 10) + iDigit;
		iValue1 = iValue1/10;
	}
	return iRev;
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the Revese number
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1,iRet = 0;

	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	iRet = Revese_Number(iNo1);
	printf("The Revese number is: %d\n",iRet);
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :      123
//  Output :     321
//
//  Input :     6879
//  Output : 	9786
//
/////////////////////////////////////////////////////////////////////