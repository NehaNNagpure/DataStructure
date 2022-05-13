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

void InsertAtLast(PPNODE Head,int ino)
{
	PNODE newn=NULL;
	PNODE temp=*Head;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=ino;
	newn->next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}
void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("%d\n",Head->data);
		Head=Head->next;
	}
}

int main()
{
	PNODE first=NULL;
	InsertAtLast(&first,10);
	InsertAtLast(&first,20);
	
	Display(first);
}