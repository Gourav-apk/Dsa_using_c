 #include<stdio.h>
 #define MAXSIZE 10
 void insert();
 void delete1();
 void display();
 int cq[MAXSIZE];
 int rear =-1,front=-1;
 int main()
 {
 	int choice;
  	do{
  			int choice;
 		printf("..........................................circular queue............................................\n");
 		printf("1. Insert \n 2. Delete \n 3. Display \n 4. Exit \n");
 		printf("...................................................................................................................\n");
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

 void insert()                            // insert  function
 {

     int n;
     if((rear+1)%MAXSIZE==front)
        printf("Queue is overflow \n");
     else
     {
         printf("Enter an element for insert \n");
         scanf("%d",&n);
         if(rear==-1&&front==-1)
         {
             rear=0;
             front=0;
         }
         else{
            rear=(rear+1)%MAXSIZE;
         }
         cq[rear]=n;
     }
 }


 void delete1()                         // delete function
 {
     int n;
     if(rear==-1&&front==-1)
     {
         printf("Queue is empty \n");
     }
     else
     {
         n=cq[front];
         if(front==rear)
         {
             front=-1;
             rear=-1;
         }
         else
         {
             front=(front+1)%MAXSIZE;
         }
         printf("Delete element %d \n",n);
     }

 }

 void display()                                   //  display function
 {

     int i;
     if(rear==-1&&front==-1)
        printf("Queue is empty \n");
     else{
        printf("Element of queue \n");
        for(i=front;i!=rear;(i=(i+1)%MAXSIZE))
        {
            printf("%5d \n",cq[i]);
        }
        printf("%5d \n",cq[i]);
     }
 }
