/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Find_Frquancy
//  Description :      	to Display the frquancy number forn  array
//  Input :             int, int , int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Find_Minimum(int iNo,int Brr[], int iNo1)
{
	int iCount = 0;
	for(int j = 0; j < iNo; j++)
	{
		if(iNo1 == Brr[j])
		{
			iCount++;
		}
	}
	return iCount;
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the frquancy number forn  array
/////////////////////////////////////////////////////////////////////

int main()
{
	int iSize , iNo,iRet= 0;
	int *Arr = NULL;

	printf("Enter the Size of Arrray: \n");
	scanf("%d",&iSize);


	Arr = (int*)malloc(iSize * sizeof(int));
	printf("Enter the elememts of Array:\n");
	for(int i = 0; i < iSize; i++)
	{
		scanf("%d",&Arr[i]);
	}

	printf("Enter the number that you want to check its frq: \n");
	scanf("%d",&iNo);

	
	iRet = Find_Minimum(iSize,Arr,iNo);
	printf("The frq count is: %d\n",iRet);

	free(Arr);


	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       5, 101 10	10	14	13 , 10
//  Output :    	2
//
//  Input :     4,	21	2	23	2,	2
//  Output : 	2
//
/////////////////////////////////////////////////////////////////////


