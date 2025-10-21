#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=(int *)malloc(8);
    printf("Enter integer value \n");
    scanf("%d",p+0);
    printf("%d \n",*p);
    return 0;
}
