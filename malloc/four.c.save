#include<stdio.h>
#include<stdlib.h>
void __attribute__((constructor))
 maan();
void __attribute__((destructor))
hello();
 void hello()
 {
     printf("This is my time now \n");
 }
void maan()
{
    printf("This is a maan function \n");
}
int main()
{
    printf("Enter any number for choose \n");
    int *p=(int *)malloc(sizeof(int));
    scanf("%d",p);
    printf("The sizeof int is our system is %d\n ",sizeof(*p));
    printf("The value of *p is %d\n ",*p);
    int a=*p;
    printf("%d \n", a+a);
    return 0;
}
