#include<stdio.h>
                                             // Direct Recurtion
                                        // storage class of c variables
                                        //1 auto storage class
                                        //2 static storage class
                                        //3 register storage class
                                        // 4 extern storage class
int main()
{
    int n;
     n=0;
    if(n<=10)
    {
        n++;
        printf("Maan\n");
        main();

    }
    return 0;
}
