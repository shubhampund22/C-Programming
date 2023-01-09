/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Display_Pattern
//  Description :      	to Display  Pattern
//  Input :             int, int
//  Output :         	Pattern
//  Date :              29/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void Display_Pattern(int iNo1, int iNo2)
{
	char ch = '\0';
	if(iNo1 != iNo2)
	{
		printf("Please enter same row and column value\n");
		return;
	}
	for(int j = 1; j <= iNo1; j++)
	{
		for(  int i = 1,ch = 'a';   i <= iNo2; i++,ch++  )
		{
			printf("%c\t",ch);
		}
		printf("\n");	
	}
}


/////////////////////////////////////////////////////////////////////
// Write a program to Display  pattern
/////////////////////////////////////////////////////////////////////

int main()
{
	int iNo1, iNo2 = 0;

	printf("Enter the row size : \n");
	scanf("%d",&iNo1);

	printf("Enter the column size : \n");
	scanf("%d",&iNo2);

	
	Display_Pattern(iNo1, iNo2);
	
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  Input :       6		6
//  Output : 
//
//				*   *   *   *   *   *
//				*   *   $   $   $   *
//				*   &   *   $   $   *
//				*   &   &   *   $   *
//				*   &   &   &   *   *
//				*   *   *   *   *   *
//
/////////////////////////////////////////////////////////////////////



