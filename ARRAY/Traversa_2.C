#include<stdio.h>

void maan();
int hello();
int main()
{
	int arr[5] ={10,20,30,40,50};
	int size =sizeof(arr)/sizeof(arr[0]) ;
	int i;
	printf("Array element are:\n");
	for(i=0;i<size;i++)
	{
		printf(" %d\n",arr[i]);
	}
	
	maan();
	hello();
	
	return 0;
}

void maan()
{
	int arr[10],size;
	printf("Enter size of arry:");
	scanf("%d",&size);
	printf("Enter element of array:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);	
	}
//	printf("Element in array are");
//	for(int i=0;i<size; i++)
//	{
//		printf("%d",arr[i]);
//	}3
//	 	 
	 
}

int hello()
{
	int arr[5]={10,20,30,40,50};
	int size =sizeof(arr)/sizeof(arr[0]);
	int i;
	printf("Array element are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	printf("%d",arr);
	
}
