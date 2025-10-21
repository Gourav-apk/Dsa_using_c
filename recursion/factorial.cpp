#include<stdio.h>
int main()
{
        int n,coun=1;
        printf("Enter the no. of factorial \n");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            coun=coun*n;
            n--;
        }
        printf("Factorial is %d",coun);

        return 0;
}
