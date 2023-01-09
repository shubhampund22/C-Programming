/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Check_Armstrong
//  Description :      	to Display the Number is Armstrong or Not
//  Input :             int
//  Output :         	String
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int Check_Armstrong(int iValue1)
{
	int iDigit = 0;
	int iCount = 0;
	int iSum = 0;
	int itemp = iValue1;
	int itemp1 = iValue1;
	
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	while(iValue1 != 0)
	{
		iCount++;
		iValue1 = iValue1/10;
	}

	while(itemp1 != 0)
	{
		iDigit = itemp1 % 10;
		int iPower = 1;

		for(int iCnt = 1; iCnt <= iCount; iCnt++)
		{
			iPower = iPower * iDigit;
		}
		iSum = iSum + iPower;
		
		itemp1 = itemp1/10;
	}

	if(iSum == itemp)
	{
		return true;
	}
	else
	{
		return false;
	}	
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the Number is Aramstrong or not
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1, iNo2= 0;
	bool bRet = false;

	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	bRet = Check_Armstrong(iNo1);
	if(bRet == true)
	{
		printf("The %d number is Aramstrong.\n",iNo1);
	}
	else
	{
		printf("The %d number is Not a Aramstrong.\n",iNo1);
	}

	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :      371
//  Output :    Aramstrong
//
//  Input :     1236
//  Output : 	Not A aramstrong
//
/////////////////////////////////////////////////////////////////////