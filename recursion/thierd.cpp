#include<stdio.h>
/**int main()
{
 static   int i=0;
    if(i<=10)
    {
        i++;
        printf("Hello\n");
        main();
    }

    return 0;
} **/

int main()
{
    static int i=0;
    if(i>10)
    {
            for(i=1;i<2;i++)
                break;
    }
    printf("%d",i);
    i++;
    main();
    return 0;
}
