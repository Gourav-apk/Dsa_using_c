#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the element of array\n");
    scanf("%d",&n);
    printf("Enter the %d element \n",n);
    int *p=(int *)calloc(n,sizeof(int));

    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
     for(int i=0;i<n;i++)
    {
         printf("Array element is %d\n",p[i]);
    }
    return 0;
}
