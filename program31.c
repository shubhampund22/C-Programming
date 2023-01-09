/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Find_Number
//  Description :      	to find the number
//  Input :             int, int, int
//  Output :         	bool
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Find_Number(int iNo,int Brr[], int iNo1)
{
	bool  flag = false;
	for(int j = 0; j < iNo; j++)
	{
		if(iNo1 == Brr[j])
		{
			flag = true;
			break;
		}
	}
	return flag;
}


/////////////////////////////////////////////////////////////////////
// Write a program to check number is presnt in array or not
/////////////////////////////////////////////////////////////////////

int main()
{
	int iSize , iNo= 0;
	bool bRet = 0;
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

	
	bRet = Find_Number(iSize,Arr,iNo);
	if(bRet == true)
	{
		printf("The Number is present: %d\n",iNo);
	}
	else
	{
		printf("The Number is Not present: %d\n",iNo);
	}

	

	free(Arr);


	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       5, 101 10	12	14	13, 12
//  Output :    	present
//
//  Input :     3,	21	2	23, 2
//  Output : 	not
//
/////////////////////////////////////////////////////////////////////


