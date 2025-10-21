#include<stdio.h>
void  xyz();
void abc()
{
    printf("ABC\n");
    xyz();
}
void xyz()
{
    printf("xyz\n");
    abc();
}
int main()
{
    xyz();
    return 0;
}
