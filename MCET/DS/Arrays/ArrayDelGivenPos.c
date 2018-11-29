/*Deletion Elements To Given Position of a Static Array
  Date: 09.08.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

int input_arr[20],n,i,elementPos;

void deleteGivenPos();
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
		printf("Enter 'D' for delete at given position, 'T' for traverse, 'X' for exit: ");
		scanf("%s",&choice);

		switch(choice)
		{
			case 'D': deleteGivenPos();
					break;
			
			case 'T': traverse();
					break;
			
			default: return;
		}
	}
}

void deleteGivenPos()
{
	printf("Enter the position to delete: ");
	scanf("%d",&elementPos);

	for(i=elementPos;i<n;i++)
	{
		input_arr[i]=input_arr[i+1];
	}

	input_arr[n]=0;
	n--;
}

void traverse()
{
	printf("Current elements in array: ");
	for(i=0;i<n;i++)
		printf("%d ",input_arr[i]);

	printf("\n");
}