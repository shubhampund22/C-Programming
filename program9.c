/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	SumFactors
//  Description :      	to print the addition of factor
//  Input :             int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumFactors(int iValue1)
{
	int iSum = 0;

	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	for(int i = 1; i < (iValue1/2)+1; i++)
	{
		if((iValue1%i) == 0)
		{
			iSum = iSum + i;
		}
	}

	return iSum;
	
}

/////////////////////////////////////////////////////////////////////
// Write a program to perform Addition of factor
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1, iRet = 0;
	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	iRet = SumFactors(iNo1);
	printf("The Addition of factor is: %d\n",iRet);

	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        5
//  Output :     	1 = 1
//
//  Input :        -10
//  Output :       5	+	2	+	1	=	8
//
/////////////////////////////////////////////////////////////////////