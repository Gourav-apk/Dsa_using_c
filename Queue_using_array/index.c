#include<stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE];
int rear=-1,front=0;
void insert();
void delete1();
void display();
int main()
{
		int choice;
	do{
		printf("\n..................Queue Menu.........................");
		printf("\n 1.Insert \n2.delete\n 3.Display\n 4.Exit");
		printf("\n......................................................");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:insert();break;
		case 2:delete1();break;
		case 3:display();break;
		default:printf("\n Invailid choice");
		}
	 }while(choice!=4);
	
	return 0;
}
void insert()
{
	int n;
	if(rear==MAXSIZE-1)
	printf("Queue is empty\n");
	else
	{
		printf("Enter an element\n");
		scanf("%d",&n);
		rear++;
		queue[rear]=n;
	}
}
void delete1()
{
	int n;
	if(front>rear)
	printf("Queue is empty\n");
	else
	{
		n=queue[front];
		printf("Delete Element %d",n);
		front++;
	}
}
void display()
{
	if(front>rear)
	printf("Queue is empty\n");
	else
	{
		int i;
		printf("Queue Elements\n");
		for(i=rear;i>=front;i--)
		 {
		 	printf("%d\n",queue[i]);
		 }
	}
}
