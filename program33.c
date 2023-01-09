/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Find_Lastt_occ
//  Description :      	to find the Last Occurance of number
//  Input :             int, int, int
//  Output :         	bool
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Find_Last_occ(int iNo,int Brr[], int iNo1)
{
	int iOcc = 0;
	for(int j = (iNo-1); j >= 0; j--)
	{
		if(iNo1 == Brr[j])
		{
			iOcc = j;
			break;
		}
	}
	return iOcc;
}


/////////////////////////////////////////////////////////////////////
// Write a program to find the Last Occurance of number
/////////////////////////////////////////////////////////////////////

int main()
{
	int iSize , iNo= 0;
	int iRet = 0;
	int *Arr = NULL;

	printf("Enter the Size of Arrray: \n");
	scanf("%d",&iSize);


	Arr = (int*)malloc(iSize * sizeof(int));
	printf("Enter the elememts of Array:\n");
	for(int i = 0; i < iSize; i++)
	{
		scanf("%d",&Arr[i]);
	}

	printf("Enter the number that you want to check its Occurance index: \n");
	scanf("%d",&iNo);

	
	iRet = Find_Last_occ(iSize,Arr,iNo);
	printf("The Last Occurance is : %d\n",iRet);

	free(Arr);


	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       5, 101 10	12	14	12, 12
//  Output :    	4
//
//  Input :     3,	21	2	23, 2
//  Output : 	1
//
/////////////////////////////////////////////////////////////////////


