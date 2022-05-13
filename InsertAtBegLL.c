#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertAtBeg(PPNODE Head,int no)
{
	PNODE newn=NULL;
	
	//allocate memory
	newn =(PNODE)malloc(sizeof(NODE));
	
	//Initialization
	newn->data=no;
	newn->next=NULL;
	
	//Insert at begning
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
} 

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf(" Add elements in linkedList at begning: %d\n",Head->data);
		Head=Head->next;
	}
}

int main()
{
	PNODE first=NULL;
	InsertAtBeg(&first,10);
	InsertAtBeg(&first,20);
	
	Display(first);
	
}