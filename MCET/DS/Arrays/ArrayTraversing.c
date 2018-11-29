/*Traversing Static Array
  Date: 18.07.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int input_arr[20],n,i;
	system("clear");
	
	printf("Enter maximum number of elements: ");
	scanf("%d",&n);

	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&input_arr[i]);

	printf("Traversing array:\n");
	for(i=0;i<n;i++)
		printf("%d ",input_arr[i]);
	
	printf("\n");
}