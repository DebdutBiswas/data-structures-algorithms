/*Inserting Elements To Beginning and End of a Static Array
  Date: 26.07.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

int input_arr[20],n,i,newElement;

void insertBeg();
void insertEnd();
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
		printf("Enter 'B' for insert at beginning, 'E' for insert at end, 'T' for traverse, 'X' for exit: ");
		scanf("%s",&choice);

		switch(choice)
		{
			case 'B': insertBeg();
					break;
			
			case 'E': insertEnd();
					break;
			
			case 'T': traverse();
					break;
			
			default: return;
		}
	}
}

void insertBeg()
{
	printf("Enter new element at beginning: ");
	scanf("%d",&newElement);

	for(i=n;i>=0;i--)
	{
		input_arr[i]=input_arr[i-1];
	}

	input_arr[0]=newElement;
	n++;
}

void insertEnd()
{
	printf("Enter new element at end: ");
	scanf("%d",&newElement);

	input_arr[n]=newElement;
	n++;
}

void traverse()
{
	printf("Current elements in array: ");
	for(i=0;i<n;i++)
		printf("%d ",input_arr[i]);

	printf("\n");
}