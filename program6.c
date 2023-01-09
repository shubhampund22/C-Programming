/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	CheckDivsion
//  Description :      	to print the number is divisible by  3 and 5 or not 
//  Input :             int
//  Output :         	divisible or Not
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckDivsion(int iValue1)
{
	if(((iValue1 % 3) == 0)&&((iValue1 % 5) == 0))
    {
        return true;
    }
	else
	{
		return false;
	}
	
}

/////////////////////////////////////////////////////////////////////
// Write a program to perform division operation
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	bool bRet = false;
	printf("Enter number: \n");
	scanf("%d",&iNo1);

	bRet = CheckDivsion(iNo1);
	if(bRet == true)
	{
		printf("Number is divisible by 3 and 5: %d\n",iNo1);
	}
	else
	{
		printf("Number is Not a divisible by 3 and 5: %d\n",iNo1);
	}
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        15
//  Output :     	Divisible
//
//  Input :        12
//  Output :       Not divisible
//
/////////////////////////////////////////////////////////////////////