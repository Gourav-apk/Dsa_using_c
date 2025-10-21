#include<stdio.h>

 void __attribute__((constructor))  // note do underscope lagane hai
 func1();
 void __attribute__((destructor))
  func2();

void func1()
{
    printf("Func \n");
}
void func2()
{
    printf("func2 \n");
}
int main()
{
    printf("Main \n");
    return 0;
}
