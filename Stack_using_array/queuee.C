
 #include<stdio.h>
 #define MAXSIZE 10
 void insert();  // function declaration
 void delete1();
  void display();
 int queue[MAXSIZE];
 int rear =-1,front=0;
 int main()
 {
 	int choice;
  	do{
//  		int choice;
 		printf(".........................................................queue..................................................\n");
 		printf("1. Insert \n 2. Delete \n 3. Display \n 4. Exit \n");
 		printf(".......................................................................................................................\n");
 		printf("Enter your choice \n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
			case 1:insert();break;
			case 2:delete1();break;
			case 3:display();break;
 			default:printf("Invailid choice\n");
		 }

	}while(choice!=4);

 	return 0;
 }
 void insert()
 {

     int n;
     if(rear==MAXSIZE)
        printf("Queue is overflow \n");
     else
     {
         printf("Enter an element \n");
         scanf("%d",&n);
         rear++;
         queue[rear]=n;
     }
 }
 void delete1()
 {
     int n;
     if(front>rear)
     printf("Queue is empty \n");
     else
     {
         n =queue[front];
         printf("Delete element %d \n",n);
         front++;
     }

 }
 void  display()
 {
     if(front>rear)
        printf("Queue is empty \n");
     else
     {
         printf("Queue element \n");
         for(int  i=rear;i>=front;i--)
            printf("%d\n",queue[i]);
     }

 }
