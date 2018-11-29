/*Construct Stack and Push/Pop it
  Date: 25.10.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack [MAX],top=-1;

void push();
int pop();
void display();

void main()
{
	int ch,item;
	system("clear");

	do
	{
		printf("\nEnter 1 for PUSH, 2 for POP, 3 for DISPLAY, 4 for Exit: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				push();
				break;

			case 2:
				item=pop();
				if(item!=-100)
				{
					printf("\nThe deleted item is: %d\n",item);
				}

				break;

			case 3:
				display();
				break;

			default:
				return;
		}
	}
	while(ch>=1&&ch<=3);
}

void push() //Function for pushing items in stack.
{
	int m;

	if(top==MAX-1)
	{
		printf("\nStack is Overflow!\n");
		return;
	}

	printf("\nInput new item to insert: ");
	scanf("%d",&m);
	top++;
	stack[top]=m;
}

int pop() //Function for poping items in stack.
{
	int item;

	if(top==-1)
	{
		printf("\nStack is Underflow!\n");
		return(-100);
	}

	item=stack[top];
	top--;
	return(item);
}

void display() //Function for display items in stack.
{
	int i;
	if (top!=-1)
	{
		printf("\nStored items in Stack:\n");
		for(i=top; i>=0; i--)
		{
			printf(" %d\n",stack[i]);
		}
	}
	else
	{
		printf("\nNo items are stored in Stack!\n");
	}
}