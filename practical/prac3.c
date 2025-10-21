#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX];
int top =-1;
void push(int item)
{
    if(top==MAX-1)
        printf("stack overflow\n");
    else
        stack[++top]=item;
}
int pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
        exit(1);
    }
    else
    {
        return stack[top--];
    }
}
int evaluatePostfix(char postfix[])
{
    int i,op1=0,op2=0,result=0;
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isdigit (postfix[i]))
        {
            push(postfix-'0');
        }
        else
          {
                 op2=pop();
                op1=pop();
                switch(postfix[i])
                {
                    case '+':result=op1+op2;break;
                    case '-':result=op1-op2;break;
                    case '*':result=op1*op2;break;
                    case '/':result=op1/op2;break;
                    default:
                    printf("Invailed operator encountered\n");
                    exit(1);
                }
            push(result);
          }
    }
    return pop();
}
int main()
{
    char postfix[MAX];
    printf("Enter postfix expression \n");
    gets(postfix);
    printf("Result of positive evaluation %d",evaluatePostfix(postfix));
    return 0;
}
