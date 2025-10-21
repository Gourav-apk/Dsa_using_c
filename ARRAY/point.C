#include<stdio.h>
//void maan(int *point)
//{
////	printf("%d\n",*point);
//	
//	*point=759;
//}
//
//int main()
//{
//	int pointer=100;
//	maan(&pointer);
//	
//	printf("%d",pointer);
//	
//	return 0;
//}

void maan(int *Point)
{
	for(int i=0;i<5;i++)
	{
		printf("%d\n",*Point);
		switch(*Point)
		{
			case 10: printf("Hello\n");
			break;
			case 20: printf("Maan jee\n");
			break;
			case 30: printf("Kala jee\n");
			break;
			case 40: printf("Maan singh jee\n");
			break;
			case 50: printf("Ayush jee\n");
			break;
		}
	}
}

int main()
{
	int point[50]={10,20,30,40,50};
	maan(point);
	
	return 0;
}
