/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Find_Maximum
//  Description :      	to Display the Maximum number forn  array
//  Input :             int, int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Find_Maximum(int iNo,int Brr[])
{
	int iMax = Brr[0];
	for(int j = 0; j < iNo; j++)
	{
		if(iMax < Brr[j])
		{
			iMax = Brr[j];
		}
	}
	return iMax;
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the Maximum number forn  array
/////////////////////////////////////////////////////////////////////

int main()
{
	int iSize , iRet= 0;
	int *Arr = NULL;

	printf("Enter the Size of Arrray: \n");
	scanf("%d",&iSize);

	Arr = (int*)malloc(iSize * sizeof(int));
	printf("Enter the elememts of Array:\n");
	for(int i = 0; i < iSize; i++)
	{
		scanf("%d",&Arr[i]);
	}

	
	iRet = Find_Maximum(iSize,Arr);
	printf("The MAximum number is: %d\n",iRet);

	free(Arr);


	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       5, 101 10	12	14	13
//  Output :    	101
//
//  Input :     3,	21	21	23
//  Output : 	23
//
/////////////////////////////////////////////////////////////////////


