#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
void Push();
void Pull();
void Display();
void temp();
int stack[MAXSIZE],top=-1;
int main()
{
    int choice;
    do{
        printf("....................STACK............\n");
        printf("1 Push \n 2 Pull \n 3 Dispaly \n 4 Exite \n");
        printf("..............................................\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:Push();
            break;
            case 2:Pull();
            break;
            case 3: Display();
            break ;
//            case 5: temp();
            break;
            default: printf("Invalid choice\n");

        }
    }while(choice!=4);
    return 0;

}
void Push()
{
    int n;
    if(top==MAXSIZE-1)
   printf("Stack is overflow\n");
   else
   {
         printf("Enter element\n");
        scanf("%d",&n);
        top++;
        stack[top]=n;
   }
}
void Pull()
{
    int  n;
    if(top==-1)
        printf("Stack is empty\n");
    else
    {
        n=stack[top];
        top--;
        printf("pull element%d\n",n);
    }
}
void Display()
{
    int i;
    if(top==-1)
        printf("Stack is empty\n");
    else
    {
        printf("Element of stack\n");
        for(i=top;i>=0;i--)
            printf("No.%d= %d\n",i,stack[i]);
    }

}
//void temp()  //  temp functiin es liye liya hain ki taki dekh sake ki  privious value he bhi nahi yaa permanantry delete hogayi hain
//{
//    int i;
//    for(i=0;i<5;i++)
//         {
//             printf("%d\n",stack[i]);
//         }
//}



