#include<stdio.h>
#include<string.h>
#define max 100
char stack[max];
int top=-1;
void push(char c)
{
    if(top==max)
        printf("stack is overflow \n");
    else
        stack[++top]=c;
}
char pop()
{
    if(top==-1)
    {
         printf("stack underflow\n ");
    return '\0';
    }
    else
        return stack[top--];
}
int main()
{
    char str[max];
    int  i;
    printf("Enter a string \n");
    gets(str);
    for(i=0;i<strlen(str);i++)
        push(str[i]);
    printf("Reversed string:\n");
    while(top!=-1)
        printf("%c",pop());
    return 0;
}
