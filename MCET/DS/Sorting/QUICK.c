/*Quick Sort
  Date: 20.09.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

int n,i,j,temp;

void quickSort(int*,int,int);
int partition(int*,int,int);

void main()
{
	int input_arr[20];
	system("clear");
	
	printf("Enter maximum number of elements: ");
	scanf("%d",&n);

	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&input_arr[i]);

	quickSort(input_arr,0,n-1);

	printf("Sorted array:\n");
	for(i=0;i<n;i++)
		printf("%d ",input_arr[i]);
	
	printf("\n");
}

void quickSort(int input_arr[],int start,int end)
{
	if(end>start)
	{
		int pivot=partition(input_arr,start,end);

		quickSort(input_arr,start,pivot-1);
		quickSort(input_arr,pivot+1,end);
	}
}

int partition(int input_arr[],int start,int end)
{
	int pivot=input_arr[end];
	j=start-1;

	//send smaller elements to left of partition index
	for(i=start;i<end;i++)
	{
		if(input_arr[i]<=pivot)
		{
			j++;
			temp=input_arr[i];
			input_arr[i]=input_arr[j];
			input_arr[j]=temp;
		}
	}
	
	//swap partition index with pivot
	temp=input_arr[j+1];
	input_arr[j+1]=input_arr[end];
	input_arr[end]=temp;

	return(j+1);
}