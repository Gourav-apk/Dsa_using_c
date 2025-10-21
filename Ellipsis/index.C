#include<stdio.h>
#include<stdarg.h>
void maan(int count, ...)
{
	va_list list;  // Ellipsis name only name
	va_start(list ,count); // initialasetion
	for(int i=1;i<=count<=10;i++)
	{
		int	num =va_arg(list,int);
			printf("%d\n",num);
	}


	va_end(list);
}
int main()
{
	maan(10,1,2,3,4,5,6,7,8,9,10);
	return 0;
}
//#include<stdarg.h>
//void hello(int count , ...)//Ellipesis
//{
//	va_list maan;
//	double sum =0;
//	va_start(maan,count);
//	for(int i=1;i<=count;i++)
//	{
//		sum =sum+va_arg(maan,int);
//	}
//
//	printf("%lf\n",sum);
//
//	va_end(maan);
//}
//
//int main()
//{
//	hello(5,1,2,3,4,5);
//
//	return 0;
//}
