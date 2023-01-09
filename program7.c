/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	JewlerPortal
//  Description :      	to print the value of gold
//  Input :             int
//  Output :         	value of gold
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void JewlerPortal(int iValue1)
{
	switch(iValue1)
	{
		case 1:
			printf("Price of 1 gm gold is: 5400 INR");
			break;
		case 2:
			printf("Price of 2 gm gold is: 10800 INR");
			break;
		case 5:
			printf("Price of 5 gm gold is: 27000 INR");
			break;
		case 10:
			printf("Price of 10 gm gold is: 54000 INR");
			break;
		default:
			printf("Invalid weight\n");

	}
	
}

/////////////////////////////////////////////////////////////////////
// Write a program to perform jew;ery price shown operation
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	printf("Enter the Gold coin size that you want to purchase: \n");
	printf("Select from: 1/2/5/10\n");
	scanf("%d",&iNo1);

	JewlerPortal(iNo1);
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :        1
//  Output :     	5400
//
//  Input :        10
//  Output :       54000
//
/////////////////////////////////////////////////////////////////////