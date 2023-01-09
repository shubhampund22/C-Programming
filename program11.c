/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	CheckPerfect
//  Description :      	to print the enter number is perfect or not
//  Input :             int
//  Output :         	string
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int CheckPerfect(int iValue1)
{
	int iSum = 0;

	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	for(int i = (iValue1/2); ((i >=1 ) && (iSum <= iValue1)); i--)
	{
		if((iValue1%i) == 0)
		{
			iSum = iSum + i;
		}
	}

	if(iSum == iValue1)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

/////////////////////////////////////////////////////////////////////
// Write a program to check a perfect number
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	bool bRet = false; 
	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	bRet = CheckPerfect(iNo1);

	if(bRet == true)
	{
		printf("%d is a Perfect number.\n", iNo1);
	}
	else
	{
		printf("%d is NOT a Perfect number.\n",iNo1);
	}

	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        6
//  Output :     6 is a perfect number
//
//  Input :        -10
//  Output :    -10 is not a perfect number
//
/////////////////////////////////////////////////////////////////////