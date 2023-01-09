/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	CheckEven
//  Description :      	to print the number is even or not 
//  Input :             int
//  Output :         	even or Not
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iValue1)
{
	if((iValue1 % 2) == 0)
    {
        return true;
    }
	else
	{
		return false;
	}
	
}

/////////////////////////////////////////////////////////////////////
// Write a program to perform CheckEven operation
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	bool bRet = false;
	printf("Enter number: \n");
	scanf("%d",&iNo1);

	bRet = CheckEven(iNo1);
	if(bRet == true)
	{
		printf("Number is Even: %d\n",iNo1);
	}
	else
	{
		printf("Number is Not a Even: %d\n",iNo1);
	}
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        2
//  Output :     	even
//
//  Input :        23
//  Output :       Not Even
//
/////////////////////////////////////////////////////////////////////