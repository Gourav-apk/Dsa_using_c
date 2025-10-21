#include<stdio.h>

void hello(int n, int x[])
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",x[i]);
	}
}
int main()
{
	hello(5,(int []){1,2,3,4,5});
	
	return 0;
}

 
