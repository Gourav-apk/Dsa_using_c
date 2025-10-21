#include<stdio.h>
/**int factorial(int n)
{
    static int f=1;
    if(n==0)
    {
        return f;
    }

    f=f*n;
    n--;
    factorial(n);
}
int main()
{
    int n,f=0;
    printf("Enter the value of fac:\n");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial is %d\n",f);
    return 0;
}
 **/
 int fac(int n)
 {
     if(n==0)
        {
             return 1;
        }
     return n*fac(n-1);
 }
 int main()
 {
     int n=5;
     int store=fac(n);
     printf("Factorial is %d\n",store);
     return 0;
 }
