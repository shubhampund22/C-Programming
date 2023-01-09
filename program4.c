/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Summation
//  Description :      	to print the number Summation value 
//  Input :             int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Summation(int iValue1)
{
	int iSum = 0;
	if(iValue1 < 0)
    {
        iValue1 = -iValue1;
    }

	for(int i = 1; i <= iValue1; i++)
	{
		iSum = iSum + i;
	}

	return iSum;
}

/////////////////////////////////////////////////////////////////////
// Write a program to perform summation Number
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1,iRet = 0;
	printf("Enter number: \n");
	scanf("%d",&iNo1);

	iRet = Summation(iNo1);
	printf("Summation of Number is: %d\n",iRet);
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        6
//  Output :     	21
//
//  Input :        -3
//  Output :       6
//
/////////////////////////////////////////////////////////////////////