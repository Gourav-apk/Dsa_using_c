#include<stdio.h>
#include"PassValue.h"
void hello(int n,int x[]);
int main()
{
	int arr[5]={10,20,30,40,50};
	hello(5,arr);
	
	return 0;
}
