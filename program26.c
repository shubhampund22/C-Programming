/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Count_Even
//  Description :      	to Display the Even Count from array
//  Input :             int, int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Count_Even(int iNo,int Brr[])
{
	int iCnt = 0;
	for(int j = 0; j < iNo; j++)
	{
		if(Brr[j] % 2 == 0)
		{
			iCnt++;
		}
	}
	return iCnt;
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the Even Count from array
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

	
	iRet = Count_Even(iSize,Arr);
	printf("The count is: %d\n",iRet);

	free(Arr);


	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       5, 101 10	12	14	13
//  Output :    	3
//
//  Input :     3,	23	21	22
//  Output : 	1
//
/////////////////////////////////////////////////////////////////////


