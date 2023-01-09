/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Sum_Even_Digit
//  Description :      	to Display the even Digit number
//  Input :             int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int Sum_Even_Digit(int iValue1)
{
	int iDigit= 0;
	int iSum = 0;
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	while(iValue1 != 0)
	{
		iDigit = iValue1%10;
		if(iDigit %2 == 0)
		{
			iSum = iSum + iDigit;
		}
		iValue1 = iValue1/10;
	}
	return iSum;
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the Sum of even Digit
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1,iRet = 0;

	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	iRet = Sum_Even_Digit(iNo1);
	printf("The sum of Even Digit is: %d\n",iRet);
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :      123
//  Output :     2
//
//  Input :     6879
//  Output : 	14
//
/////////////////////////////////////////////////////////////////////