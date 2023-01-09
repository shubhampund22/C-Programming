/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_Even_Digit
//  Description :      	to Display the even Digit number
//  Input :             int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void Display_Even_Digit(int iValue1)
{
	int iDigit= 0;
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	while(iValue1 != 0)
	{
		iDigit = iValue1%10;
		if(iDigit %2 == 0)
		{
			printf("%d  Even Digit\n",iDigit);
		}
		iValue1 = iValue1/10;
	}
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the even Digit
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;

	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	Display_Even_Digit(iNo1);
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :      123
//  Output :     2
//
//  Input :     6879
//  Output : 	6	8
//
/////////////////////////////////////////////////////////////////////