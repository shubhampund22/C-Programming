/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Struct node, Insert_First, Insert_Last,
//						Delete_First, Delete_Last, Delete_At_Posotion,
//						Insert_At_Position, Display, Count.
//  Description :      	Singly Liner Link list
//  Input :             int
//  Output :         	int
//  Date :              30/12/2022
//  Author :            Shubham Rajendra Pund
//
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Insert_First(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = iNo;
	newn->next = NULL;
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

void Insert_Last(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = iNo;
	newn->next = NULL;
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		temp = *Head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
}

void Delete_First(PPNODE Head)
{
	PNODE temp = NULL;
	temp = *Head;
	if(*Head == NULL)
	{
		printf("Linked List is empty\n");
		return;
	}
	else if(temp->next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		*Head = temp->next;
		free(temp);
	}
}

void Delete_Last(PPNODE Head)
{
	PNODE temp = NULL;
	temp = *Head;
	if(*Head == NULL)
	{
		printf("Linked List is empty\n");
		return;
	}
	else if(temp->next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}
void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|->\t",Head->data);
		Head = Head->next;
	}
	printf("NULL\n");
}
int Count(PNODE Head)
{
	int Cnt = 0;
	while(Head != NULL)
	{
		Head = Head->next;
		Cnt++;
	}
	return Cnt;
}

void Insert_At_Position(PPNODE Head, int iNo, int Pos)
{
	int iSize = Count(*Head);
	PNODE newn = NULL;
	PNODE temp = NULL;
	printf(" count is: %d\n",iSize);

	if((Pos < 1)||(Pos > (iSize+1)))
	{
		printf("Invalid Position\n");
		return;
	}
	
	if(Pos == 1)
	{
		Insert_First(Head,iNo);
	}
	else if(Pos == (iSize+1))
	{
		Insert_Last(Head,iNo);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data = iNo;
		newn->next = NULL;
		temp = *Head;
		for(int iCnt = 1; iCnt < (Pos-1) ; iCnt++)
        {
            temp = temp -> next;
        }
		newn -> next = temp -> next;
        temp->next = newn;

	}
}


void Delete_At_Position(PPNODE Head,int Pos)
{
	int iSize = Count(*Head);
	PNODE temp = NULL;
	PNODE tempdelete = NULL;

	printf(" count is: %d\n",iSize);

	if((Pos < 1)||(Pos > (iSize+1)))
	{
		printf("Invalid Position\n");
		return;
	}
	
	if(Pos == 1)
	{
		Delete_First(Head);
	}
	else if(Pos == (iSize+1))
	{
		Delete_Last(Head);
	}
	else
	{
		temp = *Head;
		for(int iCnt = 1; iCnt < (Pos-1) ; iCnt++)
        {
            temp = temp -> next;
        }
        tempdelete = temp->next;
        temp->next = temp->next->next;
        free(tempdelete);

	}
}
/////////////////////////////////////////////////////////////////////
// Write a program to 
/////////////////////////////////////////////////////////////////////

int main()
{

	printf("-------------------Welcome into the Singly LinkList Application----------\n");
	int iNo = 0;
	int iRet = 0;
	PNODE first = NULL;
	while(1)
	{
		int iNo1,iPos = 0;
		printf("===============================================================================\n");
		printf("Please Enter For Insert First Elememt : 1\n");
		printf("Please Enter For Insert Last Elememt : 2\n");
		printf("Please Enter For Insert At Position Elememt : 3\n");
		printf("Please Enter For Delete First Elememt : 4\n");
		printf("Please Enter For Delete Last Elememt : 5\n");
		printf("Please Enter For Delete At Position Elememt : 6\n");
		printf("Please Enter For Display Elememt : 7\n");
		printf("Please Enter For Count Elememt : 8\n");
		printf("Please Enter For to Exit from Application  : 9\n");
		printf("===============================================================================\n");

		printf("Please enter Your Choice: --------\n");
		scanf("%d",&iNo);
		switch(iNo)
		{
			case 1:
				printf("Please Enter The Element:---\n");
				scanf("%d",&iNo1);
				Insert_First(&first,iNo1);
				break;
			case 2:
				printf("Please Enter The Element:---\n");
				scanf("%d",&iNo1);
				Insert_Last(&first,iNo1);
				break;
			case 3:
				printf("Please Enter The Element:---\n");
				scanf("%d",&iNo1);
				printf("Please Enter Position:--------\n");
				scanf("%d",&iPos);
				Insert_At_Position(&first,iNo1,iPos);
				break;
			case 4:
				Delete_First(&first);
				break;
			case 5:
				Delete_Last(&first);
				break;
			case 6:
				printf("Please Enter Position:--------\n");
				scanf("%d",&iPos);
				Delete_At_Position(&first,iPos);
				break;
			case 7:
				Display(first);
				break;
			case 8:
				iRet = Count(first);
				printf("The Count of Element is: %d\n",iRet);
				break;
			case 9:
				printf("=============Thank You For Using ME====================\n");
				return -1;
			default:
				printf("Invalid Position:\n");
				break;

		}

	}
	
	return 0;
}



/////////////////////////////////////////////////////////////////////
//
//  
/////////////////////////////////////////////////////////////////////



