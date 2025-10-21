 #include<stdio.h>
 #define MAXSIZE 10
 int cq[MAXSIZE];
 int rear =-1,front=-1;
 int main()
 {
 	int choice;
  	do{
  			int choice;
 		prinft(".........................................................circular queue...................................................................\n");
 		printf("1. Insert \n 2. Delete \n 3. Display \n 4. Exit \n");
 		printf("..................................................................................................................................\n");
 		printf("Enter your choice \n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
//  		case 1:insert();break;
// 			case 2:delete1();break;
// 			case 3:display();break;
 			default:printf("Invailid choice\n");
		 }

	}while(choice!=4);

 	return 0;
 }
