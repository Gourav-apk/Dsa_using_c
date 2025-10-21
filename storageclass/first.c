#include<stdio.h>
#include"third.h"
  extern int count1;
void display();

int main()
{
display(33);
count1=200;
display(55);
printf("%d",count1);

    return 0;
}
