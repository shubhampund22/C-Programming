/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Addition OF two Number
//  Description :      	interger, integer
//  Input :             int
//  Output :            int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iValue1, int iValue2)
{
	int Ans = 0;
	Ans = iValue1 + iValue2;
	return Ans;
}

/////////////////////////////////////////////////////////////////////
// Write a program to perform addition of 2 numbers
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iRet = 0;
	printf("Enter fisrt number: \n");
	scanf("%d",&iNo1);

	printf("Enter Second number: \n");
	scanf("%d",&iNo2);

	iRet = Addition(iNo1,iNo2);
	printf("Addition of two number is: %d\n",iRet);
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        11      10
//  Output :       21
//
/////////////////////////////////////////////////////////////////////