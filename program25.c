/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_Even
//  Description :      	to Display the Even elements from array
//  Input :             int, int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void Display_Even(int iNo,int Brr[])
{
	for(int j = 0; j < iNo; j++)
	{
		if(Brr[j] % 2 == 0)
		{
			printf("%d Even Number\n",Brr[j]);
		}
	}
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the Even Number from Array
/////////////////////////////////////////////////////////////////////

int main()
{
	int iSize = 0;
	int *Arr = NULL;

	printf("Enter the Size of Arrray: \n");
	scanf("%d",&iSize);

	Arr = (int*)malloc(iSize * sizeof(int));
	printf("Enter the elememts of Array:\n");
	for(int i = 0; i < iSize; i++)
	{
		scanf("%d",&Arr[i]);
	}

	
	Display_Even(iSize,Arr);
	free(Arr);


	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       5, 101 10	12	14	13
//  Output :    10	12	14
//
//  Input :     3,	23	21	22
//  Output : 	12
//
/////////////////////////////////////////////////////////////////////


