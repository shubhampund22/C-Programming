/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Check_Pallindrome
//  Description :      	to Display the number is Pallindrome or not
//  Input :             int
//  Output :         	string
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool Check_Pallindrome(int iValue1)
{
	int iDigit= 0;
	int iRev = 0;
	int temp = iValue1;
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	while(iValue1 != 0)
	{
		iDigit = iValue1%10;
		iRev = (iRev * 10) + iDigit;
		iValue1 = iValue1/10;
	}

	if(iRev == temp)
	{
		return true;
	}
	else
	{
		return false;
	}
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the Number is Pallindrome or not
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	bool bRet = false;

	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	bRet = Check_Pallindrome(iNo1);
	if(bRet == true)
	{
		printf("The %d number is Pallindrome.\n",iNo1);
	}
	else
	{
		printf("The %d number is Not a Pallindrome.\n",iNo1);
	}
	
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :      121
//  Output :    number is pallindrome
//
//  Input :     6879
//  Output : 	is not a pallindrome
//
/////////////////////////////////////////////////////////////////////