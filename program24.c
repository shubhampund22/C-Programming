/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_Array
//  Description :      	to Display the elements from array
//  Input :             int, int
//  Output :         	int
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void Display_Array(int iNo,int Brr[])
{
	for(int j = 0; j < iNo; j++)
	{
		printf("|%d|--->",Brr[j]);
	}
	printf("NULL\n");
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display the Number from Array
/////////////////////////////////////////////////////////////////////

int main()
{
	int iSize = 0;
	int *Arr = NULL;

	printf("Enter the Size of Arrray: \n");
	scanf("%d",&iSize);

	Arr = (int*)malloc(iSize * sizeof(int));
	printf("Enter the elements: \n");
	for(int i = 0; i< iSize; i++)
	{
		scanf("%d",&Arr[i]);
	}
	Display_Array(iSize,Arr);


	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :      5, 101 10	12	14	14	
//  Output :    101	10	12	14	14
//
//  Input :     3,	23	21	22
//  Output : 	23	21	22
//
/////////////////////////////////////////////////////////////////////


