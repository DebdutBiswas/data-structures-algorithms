/*Binary Search
  Date: 30.08.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

int input_arr[20],n,i;

void binarySearch();
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
			case 'S': binarySearch();
					break;
			
			default: return;
		}
	}
}

void binarySearch()
{
	int left=0,right=n-1,mid,searchElement;

	printf("Enter the element to search: ");
	scanf("%d",&searchElement);

	while(left<=right)
	{
		mid=(left+right)/2;

		if(input_arr[mid]<searchElement)
			left=mid+1;
		else if(input_arr[mid]>searchElement)
			right=mid-1;
		else
		{
			printf("Element %d is in %d position!\n",searchElement,mid);
			return;
		}
	}
	printf("Element not present in array!\n");
}