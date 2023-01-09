/////////////////////////////////////////////////////////////////////
//
//  Function Name:  	Struct node, Insert_First, Insert_Last,
//						Delete_First, Delete_Last, Delete_At_Posotion,
//						Insert_At_Position, Display, Count.
//  Description :      	Doubly Circular Link list
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
	struct node * prev;


};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Insert_First(PPNODE Head,PPNODE Tail,int iNo)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;
	if(*Head == NULL)
	{
		*Head = newn;
		*Tail = newn;
	}
	else
	{
		newn->next = *Head;
		(*Head)->prev = newn;
		*Head = newn;
	}
	(*Head)->prev = *Tail;
    (*Tail)->next = *Head;
	
}

void Insert_Last(PPNODE Head,PPNODE Tail, int iNo)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;
	if(*Head == NULL)
    {
       *Head = newn;
	   *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        newn->prev = (*Tail);

        *Tail = newn;
    }
    (*Head)->prev = *Tail;
    (*Tail)->next = *Head;
}

void Delete_First(PPNODE Head,PPNODE Tail)
{
	PNODE temp = NULL;
	PNODE temp1 = NULL;
	temp = *Head;
	temp1 = *Tail;

	if(*Head == NULL)
	{
		printf("Linked List is empty\n");
		return;
	}
	else if(temp->next == *Head)
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;
	}
	else
	{
		*Head = temp->next;
		(*Head)->prev = temp1;
		
		(*Tail)->next = *Head;
		free(temp);
		
	}
}

void Delete_Last(PPNODE Head,PPNODE Tail)
{
	PNODE temp,temp1 = NULL;
	temp = *Head;
	temp1 = *Tail;

	if(*Head == NULL)
	{
		printf("Linked List is empty\n");
		return;
	}
	else if(temp->next == temp)
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;
	}
	else
	{
		*Tail = temp1->prev;
		(*Tail)->next = *Head;
		
		(*Head)->prev = *Tail; 
		free(temp1);
	}
}
void Display(PNODE Head,PNODE Tail)
{
	PNODE temp = Head;
	PNODE temp1 = Tail;
	if(temp == NULL)
	{
		printf("List is Empty\n");
		return;
	}
	do
	{
		printf("<=|%d|=>",temp->data);
		temp = temp->next;
	}while(temp != Head);
	printf("\n");
}
int Count(PNODE Head,PNODE Tail)
{
	int Cnt = 0;
	while(Head != Tail)
	{
		Head = Head->next;
		Cnt++;
	}
	return Cnt+1;
}

void Insert_At_Position(PPNODE Head,PPNODE Tail,int iNo, int Pos)
{
	int iSize = Count(*Head,*Tail);
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
		Insert_First(Head,Tail,iNo);
	}
	else if(Pos == (iSize+1))
	{
		Insert_Last(Head,Tail,iNo);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data = iNo;
		newn->next = NULL;
		newn->prev = NULL;
		temp = *Head;
		for(int iCnt = 1; iCnt < (Pos-1) ; iCnt++)
        {
            temp = temp -> next;
        }
		newn -> next = temp -> next;
		newn->prev = temp;
        temp->next = newn;
		newn->next->prev = temp->next;

	}
}


void Delete_At_Position(PPNODE Head,PPNODE Tail,int Pos)
{
	int iSize = Count(*Head,*Tail);
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
		Delete_First(Head,Tail);
	}
	else if(Pos == (iSize+1))
	{
		Delete_Last(Head,Tail);
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
		temp->next->prev = temp;

	}
}
/////////////////////////////////////////////////////////////////////
// Write a program to Display  pattern
/////////////////////////////////////////////////////////////////////

int main()
{

	printf("-------------------Welcome into the Singly LinkList Application----------\n");
	int iNo = 0;
	int iRet = 0;
	PNODE first = NULL;
	PNODE last = NULL;
	while(1)
	{
		int iNo1,iPos = 0;
		/*printf("===============================================================================\n");
		printf("Please Enter For Insert First Elememt : 1\n");
		printf("Please Enter For Insert Last Elememt : 2\n");
		printf("Please Enter For Insert At Position Elememt : 3\n");
		printf("Please Enter For Delete First Elememt : 4\n");
		printf("Please Enter For Delete Last Elememt : 5\n");
		printf("Please Enter For Delete At Position Elememt : 6\n");
		printf("Please Enter For Display Elememt : 7\n");
		printf("Please Enter For Count Elememt : 8\n");
		printf("Please Enter For to Exit from Application  : 9\n");
		printf("===============================================================================\n");*/

		printf("Please enter Your Choice: --------\n");
		scanf("%d",&iNo);
		switch(iNo)
		{
			case 1:
				printf("Please Enter The Element:---\n");
				scanf("%d",&iNo1);
				Insert_First(&first,&last,iNo1);
				break;
			case 2:
				printf("Please Enter The Element:---\n");
				scanf("%d",&iNo1);
				Insert_Last(&first,&last,iNo1);
				break;
			case 3:
				printf("Please Enter The Element:---\n");
				scanf("%d",&iNo1);
				printf("Please Enter Position:--------\n");
				scanf("%d",&iPos);
				Insert_At_Position(&first,&last,iNo1,iPos);
				break;
			case 4:
				Delete_First(&first,&last);
				break;
			case 5:
				Delete_Last(&first,&last);
				break;
			case 6:
				printf("Please Enter Position:--------\n");
				scanf("%d",&iPos);
				Delete_At_Position(&first,&last,iPos);
				break;
			case 7:
				Display(first,last);
				break;
			case 8:
				iRet = Count(first,last);
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



