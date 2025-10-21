#include<stdio.h>
void maan(int x[][2])
{
//	for(int i=0,j=0;i<2,j<2;i++,j++)
//	{
//		printf("a=[%d] b=[%d]\n",x[i],x[j]);
//	}
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++){
		printf("%d\n",x[i][j]);
	}
}
}
int main()
{
	int arr[2][2]={{12,12},{45,56}};
	maan(arr);
	
	return 0;
		
}
