#include<iostream>
using namespace std;
int func(int a,int b)
{
	return a+b;
}
void op(int(*func)(int , int) int x, int y)
{
	int result=func(x,y);
	cout<<"Result"<<result;
}
int main()
{
	int a=10,b=20;
	op(func,a,b);
	
	return 0;
}
