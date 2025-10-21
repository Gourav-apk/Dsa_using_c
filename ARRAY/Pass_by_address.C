#include<stdio.h>
void maan(int *p)
{
	*p=3000;
}
int main()
{
		int a=20;
	maan(&a);
	
	printf("%d",a);
	return 0;
}
