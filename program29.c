/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Find_Minimum
//  Description :      	to Display the Minimum number forn  array
//  Input :             int, int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Find_Minimum(int iNo,int Brr[])
{
	int iMin = Brr[0];
	for(int j = 0; j < iNo; j++)
	{
		if(iMin > Brr[j])
		{
			iMin = Brr[j];
		}
	}
	return iMin;
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the Minimum number forn  array
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

	
	iRet = Find_Minimum(iSize,Arr);
	printf("The Minimum number is: %d\n",iRet);

	free(Arr);


	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       5, 101 10	12	14	13
//  Output :    	10
//
//  Input :     3,	21	2	23
//  Output : 	2
//
/////////////////////////////////////////////////////////////////////


