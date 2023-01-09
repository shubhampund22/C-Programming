/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Sum_Array
//  Description :      	to Display the addition of  array
//  Input :             int, int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Sum_Array(int iNo,int Brr[])
{
	int iSum = 0;
	for(int j = 0; j < iNo; j++)
	{
		iSum = iSum + Brr[j];
	}
	return iSum;
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the addition of  array
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

	
	iRet = Sum_Array(iSize,Arr);
	printf("The Summation is: %d\n",iRet);

	free(Arr);


	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       5, 101 10	12	14	13
//  Output :    	150
//
//  Input :     3,	23	21	22
//  Output : 	66
//
/////////////////////////////////////////////////////////////////////


