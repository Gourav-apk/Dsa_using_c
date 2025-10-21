#include<stdio.h>
   int count1=0;
int nrecur(int n)
{
    count1++;
	if(n==0)
	{
	    	printf("Function calling is :%d\n",count1);
		return 1;
	}

	 return n*nrecur(n-1);
}
int main()
{
	int n=5;
	int fact=nrecur(n);
	printf("factorial %d is %d\n",n,fact);
//	printf("Function calling is :%d\n",count1);
	return 0;
}
