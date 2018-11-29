/*Insertion Sort
  Date: 20.09.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int input_arr[20],n,i,j,temp;
	system("clear");
	
	printf("Enter maximum number of elements: ");
	scanf("%d",&n);

	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&input_arr[i]);
	
	for(i=0;i<n;i++)
	{
		temp=input_arr[i];
		
		for(j=i-1;j>=0;j--)
		{
			if(temp<input_arr[j])
				input_arr[j+1]=input_arr[j];
			else
				break;
		}
		
		input_arr[j+1]=temp;
	}

	printf("Sorted array:\n");
	for(i=0;i<n;i++)
		printf("%d ",input_arr[i]);
	
	printf("\n");
}
