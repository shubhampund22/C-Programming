/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_Factor_Forword, Display_Factor_Backword
//  Description :      	to print the factor
//  Input :             int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void Display_Factor_Forword(int iValue1)
{
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	for(int i = 1; i <= (iValue1/2); i++)
	{
		if((iValue1%i) == 0)
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
	
}

void Display_Factor_Backword(int iValue1)
{
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}

	for(int i = (iValue1/2); i >=1 ; i--)
	{
		if((iValue1%i) == 0)
		{
			printf("%d\t",i);
		}
	}
}

/////////////////////////////////////////////////////////////////////
// Write a program to Display forword and backword factor
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	bool bRet = false; 
	printf("Enter the Number: \n");
	scanf("%d",&iNo1);

	Display_Factor_Forword(iNo1);
	Display_Factor_Backword(iNo1);


	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        6
//  Output :     3	2	1 //backword
//
//  Input :        6
//  Output :    1	2	3  //forword
//
/////////////////////////////////////////////////////////////////////