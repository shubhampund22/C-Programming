/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	CountFactor
//  Description :      	to count the factor
//  Input :             int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iValue1)
{
	int iCount = 0;
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	for(int i = 1; i <= (iValue1/2); i++)
	{
		if((iValue1%i) == 0)
		{
			iCount++;
		}
	}
	return iCount;
	
}


/////////////////////////////////////////////////////////////////////
// Write a program to count the factor
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	int iRet = 0; 
	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	iRet = CountFactor(iNo1);
	printf("The count of Factor is: %d\n",iRet);
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        5
//  Output :     1
//
//  Input :        6
//  Output : 	3
//
/////////////////////////////////////////////////////////////////////