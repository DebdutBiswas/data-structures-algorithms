/*Inserting Elements To Given Position of a Static Array
  Date: 09.08.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

int input_arr[20],n,i,elementPos,newElement;

void insertGivenPos();
void traverse();

void main()
{
	char choice;
	printf("Enter maximum number of elements: ");
	scanf("%d",&n);

	printf("Enter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&input_arr[i]);

	while(1)
	{
		printf("Enter 'I' for insert at given position, 'T' for traverse, 'X' for exit: ");
		scanf("%s",&choice);

		switch(choice)
		{
			case 'I': insertGivenPos();
					break;
			
			case 'T': traverse();
					break;
			
			default: return;
		}
	}
}

void insertGivenPos()
{
	printf("Enter the position to insert: ");
	scanf("%d",&elementPos);
	printf("Enter the new element: ");
	scanf("%d",&newElement);

	for(i=n;i>=elementPos;i--)
	{
		input_arr[i]=input_arr[i-1];
	}

	input_arr[elementPos]=newElement;
	n++;
}

void traverse()
{
	printf("Current elements in array: ");
	for(i=0;i<n;i++)
		printf("%d ",input_arr[i]);

	printf("\n");
}