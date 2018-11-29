/*Construct Linear Singly LinkList and Traverse It
  Date: 31.10.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

//Create structure type node
typedef struct NODE
{
	int info;
	struct NODE *link;
} node;

node *first,*ptr,*cpt;

void create();
void traverse();

void main()
{
	create();
	traverse();	
}

void create()
{
	ptr=(node*)malloc(sizeof(node));

	char choice;

	printf("Input first node info: ");
	scanf("%d",&ptr->info);
	first=ptr;
	
	do
	{
		printf("Enter (y/n) for more nodes: ");
		scanf("%s",&choice);
		if((choice=='n') || (choice=='N'))
		{
			break;
		}
		
		cpt=(node*)malloc(sizeof(node));
		printf("Input next node info: ");
		scanf("%d",&cpt->info);
		ptr->link = cpt;
		ptr = cpt;
	}
	while((choice=='y') || (choice=='Y'));
	
	ptr->link=NULL;
}

void traverse()
{
	printf("Travarsing Nodes and printing it:\n");
	ptr=first;
	
	while(ptr!=NULL)
	{		
		printf("%d\n",ptr->info);
		ptr=ptr->link;		
	}
}