#include<stdio.h>
void maan();
int main()
{
	int arr[5],i;
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("Enter the value of array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array is reverse order\n");
	for(i=size-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	maan();
	return 0;
}

void maan()
{
	int arr[40],size;
	int i;
	printf("Enter the size of array");
	scanf("%d",&size);
	printf("Enter the value of array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
}
