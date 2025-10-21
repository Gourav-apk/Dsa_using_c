#include<stdio.h>
void maan();

//
//void maan(const int hello[] )
//{
//	for(int i=0;i<5;i++)
//	{
//		printf(" %d",hello[i]);
//	}
//	
//}
//int main()
//{
//	const int arr[5]={10,20,30,40,50};
//	maan(arr[]);
//	
//	return 0;
//}


void maan(int hello[] )
{
 	
 	for(int i=0;i<5;i++)
 	{
 		printf("in hello function %d\n",hello[i]+100);
	}
	
}
int main()
{
	 int arr[5]={10,20,30,40,50};
	 maan(arr);
	
	for(int i=0;i<5;i++)
	{
		printf("IN main function %d\n",arr[i]);
	}
	
	return 0;
}
