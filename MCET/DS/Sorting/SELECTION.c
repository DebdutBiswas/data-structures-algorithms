/*Selection Sort
  Date: 13.09.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int input_arr[20],n,i,j,temp,smallest;
	system("clear");
	
	printf("Enter maximum number of elements: ");
	scanf("%d",&n);

	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&input_arr[i]);
	
	for(i=0;i<n;i++)
	{
		smallest=i;
		
		for(j=i+1;j<n;j++)
		{
			if(input_arr[j]<input_arr[smallest])
				smallest=j;
		}

		if(smallest!=i)
		{
			temp=input_arr[smallest];
			input_arr[smallest]=input_arr[i];
			input_arr[i]=temp;
		}
	}

	printf("Sorted array:\n");
	for(i=0;i<n;i++)
		printf("%d ",input_arr[i]);
	
	printf("\n");
}