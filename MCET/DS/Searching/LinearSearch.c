/*Linear Search
  Date: 30.08.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

int input_arr[20],n,i,searchElement;

void linearSearch();
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
		printf("Enter 'S' for search element position, 'X' for exit: ");
		scanf("%s",&choice);

		switch(choice)
		{
			case 'S': linearSearch();
					break;
			
			default: return;
		}
	}
}

void linearSearch()
{
	printf("Enter the element to search: ");
	scanf("%d",&searchElement);

	for(i=0;i<n;i++)
	{
		if(input_arr[i]==searchElement)
		{
			printf("Element %d is in %d position!\n",searchElement,i);
			return;
		}	
	}
	printf("Element not present in array!\n");
}