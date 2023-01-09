/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Power
//  Description :      	to Display the power to res to
//  Input :             int,int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int Power(int iValue1,int iValue2)
{
	int iDigit= 0;
	int iPower = 1;
	
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	for(int iCnt = 1; iCnt <= iValue2; iCnt++)
	{
		iPower = iPower * iValue1;
	}

	return iPower;
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the power to the number
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1, iNo2= 0;
	int iRet = 0;

	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	printf("Enter the Power to the Number: \n");
	scanf("%d",&iNo2);

	iRet = Power(iNo1,iNo2);
	printf("The Power of number is: %d\n",iRet);

	
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :      2	4
//  Output :    16
//
//  Input :     6	3
//  Output : 	216
//
/////////////////////////////////////////////////////////////////////