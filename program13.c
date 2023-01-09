/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	CheckPrime
//  Description :      	to number is prime or not
//  Input :             int
//  Output :         	string
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iValue1)
{
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	for(int i = 2; i <= (iValue1/2); i++)
	{
		if((iValue1%i) == 0)
		{
			return false;
		}
	}
	return true;
	
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display enter number is prime or not
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	bool bRet = false; 
	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	bRet = CheckPrime(iNo1);
	if(bRet == true)
	{
		printf("%d is a Prime number.\n", iNo1);
	}
	else
	{
		printf("%d is NOT a Prime number.\n",iNo1);
	}

	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        5
//  Output :     5 is a prime number
//
//  Input :        6
//  Output : 	6 is not a prime number
//
/////////////////////////////////////////////////////////////////////