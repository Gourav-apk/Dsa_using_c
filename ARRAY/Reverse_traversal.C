#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int size =sizeof(arr)/sizeof(arr[0]);
	int i;
	printf("Array is reverse order\n");
	for(i =size-1;i>=0;i--)
	{
		printf(" %d\n",arr[i]);
	}
	printf("\nArray is Forward traversal:\n");
	for(i=0;i<size;i++)
	{
		printf(" %d\n",arr[i]);
	}
	
	return 0;
}
