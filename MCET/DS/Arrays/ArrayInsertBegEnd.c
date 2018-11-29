/*Inserting Elements To Beginning and End of a Static Array
  Date: xx.xx.2018
  Author: Debdut
*/

#include<stdio.h>
#include<stdlib.h>

int insertBeg(int,int*);
int insertEnd(int,int*);
void traverse(int,int*);

void main()
{
	int *input_arr,n;
	#if defined(_WIN32)
	system("cls");
	#else
	system("clear");
	#endif
	
	printf("Enter maximum number of elements: ");
	scanf("%d",&n);

	printf("Enter array elements:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&input_arr[i]);

	traverse(n,input_arr);
	n=insertBeg(n,input_arr);
	traverse(n,input_arr);
	n=insertEnd(n,input_arr);
	traverse(n,input_arr);
}

int insertBeg(int maxElement,int input_arr[])
{
	int newElement;
	printf("Enter new element: ");
	scanf("%d",&newElement);

	for(int i=maxElement;i>=0;i--)
	{
		input_arr[i]=input_arr[i-1];
	}

	input_arr[0]=newElement;
	return maxElement+1;
}

int insertEnd(int maxElement,int input_arr[])
{
	int newElement;
	printf("Enter new element: ");
	scanf("%d",&newElement);

	input_arr[maxElement]=newElement;
	return maxElement+1;
}

void traverse(int maxElement,int input_arr[])
{
	printf("Current elements in array:\n");
	for(int i=0;i<maxElement;i++)
		printf("%d ",input_arr[i]);
	
	printf("\n");
}