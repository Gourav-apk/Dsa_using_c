#include<stdio.h>
void maan();
int main()
{
	int a[50],size;
	int i;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	printf("Enter element of array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("element in array are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	
	maan();
	
	return 0;
}

void maan()
{
	int arr[5]={10,20,30,40,50};
	int size =sizeof(arr[0]);
	int i;
	printf("Array element are :");
	for(i =0;i<size;i++)
	{
		printf(" %d",arr[i]);
	}
	
 
}
