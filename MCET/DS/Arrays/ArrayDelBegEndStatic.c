/*Deleting Elements To Beginning and End of a Static Array
  Date: 09.08.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

int input_arr[20],n,i;

void deleteBeg();
void deleteEnd();
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
		printf("Enter 'B' for delete at beginning, 'E' for delete at end, 'T' for traverse, 'X' for exit: ");
		scanf("%s",&choice);

		switch(choice)
		{
			case 'B': deleteBeg();
					break;
			
			case 'E': deleteEnd();
					break;
			
			case 'T': traverse();
					break;
			
			default: return;
		}
	}
}

void deleteBeg()
{
	for(i=0;i<n;i++)
	{
		input_arr[i]=input_arr[i+1];
	}

	input_arr[n]=0;
	n--;
}

void deleteEnd()
{
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