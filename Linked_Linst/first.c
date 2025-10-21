
#include<stdio.h>
void create();
void display();
void insert_fisrt();
void insert_middle();
void insert_Last();
void delete1_first();
void delete1_middle();
void delete1_Last();
void count();
void search();

struct node{
    int data;
    struct node*add;

};struct node *start=NULL,*temp,*new1,*next,*prev;


int main()
{

 	int choice;
  	do{
 		printf(".........................................................Linked List................................................\n");
        printf("1.create \n");
        printf("2.Insert on first\n");
        printf("3.Insert on middle\n");
        printf("4.Insert on Last \n");
        printf("5.Delete from first\n");
        printf("6.delete from Middle\n");
        printf("7.Delete from Last\n");
        printf("8.Display\n");
        printf("9.Count\n");
        printf("10.Search\n");
 		printf("..................................................................................................................................\n");
 		printf("Enter your choice \n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
            case 1:create();break;
			case 2:insert_first();break;
			case 3:insert_middle();break;
			case 4:insert_Last();break;
			case 5:delete1_first();break;
			case 6:delete1_middle();break;
			case 7:delete1_Last();break;
            case 8:display();break;
            case 9:count();break;
            case 10:search();break;
            default:printf("Invailid choice\n");
		 }

	}while(choice!=9);

    return 0;
}

void create()
{

    char ch;
    int n;
    printf("Enter an element \n");
    scanf("%d",&n);
    start=(struct node*)(malloc(sizeof(struct node)));
    start ->data=n;
    start->add=NULL;
    temp=start;
    printf("\nWant to continue ");
    ch=getche();
    fflush(stdin);
    while(ch=='y'||ch=='Y')
    {
        printf("\nEnter next element ");
        scanf("%d",&n);
        new1=(struct node*)(malloc(sizeof(struct node)));
        new1->data=n;
        new1->add=NULL;
        temp->add=new1;
        temp=temp->add;
        printf("\nWant to continue2 ");
        ch=getche();
    }
}
void display()
{
    if(start==NULL)
    {
        printf("List not found\n");
    }
    else{
        temp=start;
        while(temp!=NULL)
        {
            printf("\t %d\n",temp->data);
            temp=temp->add;
        }
    }
}
void insert_first()
{
    int  n;
    if(start==NULL)
        printf("List not found \n");
    else
    {
        printf("Enter new element for insert \n");
        scanf("%d",&n);
        new1=(struct node*)(malloc(sizeof(struct node)));
         new1->data=n;
        new1->add=NULL;
        new1->add=start;
        start=new1;
    }
}
void insert_middle()
{
    int n,pos,i=1;
    if(start==NULL)
        printf("List not found\n");
    else
    {
        printf("Enter Elelment \n");
        scanf("%d",&n);
        new1=(struct node*)(malloc(sizeof(struct node)));
         new1->data=n;
        new1->add=NULL;
        printf("Enter true position \n");
        scanf("%d",&pos);
       next=start;
        while(i<pos)
        {
            prev=next;
            next=next->add;
            i++;
        }
        prev->add=new1;
        new1->add=next;
    }
}
void insert_Last()
{
    int  n;
    if(start==NULL)
        printf("List not found \n");
    else
    {
        printf("Enter new element for insert \n");
        scanf("%d",&n);
        new1=(struct node*)(malloc(sizeof(struct node)));
         new1->data=n;
        new1->add=NULL;
        temp=start;
        while(temp-> add!=NULL)
        {
            temp=temp->add;
        }
        temp->add=new1;
    }
}
void delete1_first()
{
    if(start==NULL)
        printf("List not  found \n");
    else
    {
        temp=start;
        start=start->add;
        printf("Delete node %d",temp->data);
        free(temp);
    }
}

void delete1_Last()
{
    if(start==NULL)
        printf("List not found\n");
    else
    {
        temp=start;
        while(temp->add!=NULL)
        {
            prev=temp;
            temp=temp->add;
        }
            prev->add=NULL;
            printf("delete node %d",temp->data);
            free(temp);
    }
}
void delete1_middle()
{
    int pos,i=1;
    if(start==NULL)
        printf("List not found \n");
    else{
        printf("Enter true position\n");
        scanf("%d",&pos);
        temp=start;
        while(i<pos)
        {
            prev=temp;
            temp=temp->add;
            i++;
        }
        next=temp->add;
        prev->add=next;
        printf("Delete node is %d",temp->data);
        free(temp);
    }
}
void count()
{
    int c=0;
    if(start==NULL)
        printf("\n List not found");
    else{
        temp=start;
        while(temp!=NULL)
        {
            c++;
            temp=temp->add;
        }
        printf("\n Total node is %d",c);
    }
}
void search()
{
    int s,f=0;
    if(start==NULL)
        printf("List not found \n");
    else
    {
        printf("Enter an element for search\n");
        scanf("%d",&s);
        temp=start;
        while(temp!=NULL)
        {
            if(temp->data==s)
            {
                f=1;
                break;
            }
            temp=temp->add;
        }
        if(f==1)
            printf("searching success \n");
        else
        {
            printf("searching not success \n");
        }
    }

}
