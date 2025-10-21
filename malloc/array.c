#include<stdio.h>
#include<stdlib.h>
int main()
{
       int n;
    printf("Enter the no. of array \n");
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    printf("Enter this values %d \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int j=0;j<n;j++)
    {
        printf("Answer is %d\n ",p[j]);
    }
    free(p);
    *p=NULL;
    printf("The value of pointer is %d \n",*p);
    return 0;
}
