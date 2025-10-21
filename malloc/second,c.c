#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=(int *)malloc(sizeof(int));
    printf("Enter integer value \n");
    scanf("%d",p+0);
    //printf("%d \n",*p);
    int *q=(int *)malloc(sizeof(int));
    scanf("%d",q);
    //printf("%d \n\n",*q);

    printf("%d",*p+*q);


    return 0;
}
