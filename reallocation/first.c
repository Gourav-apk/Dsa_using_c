#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the length of array \n");
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    printf("Enter the any %d values\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int j=0;j<n;j++)
    {
        printf("Answer is %d\n ",p[j]);
    }
    printf("Expend the array \n");
    scanf("%d",n);

    p=(int *)realloc(p,n*sizeof(int ));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int j=0;j<n;j++)
    {
        printf("Answer is %d\n ",p[j]);
    }
    return 0;
}
