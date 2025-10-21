#include<stdio.h>
//void maan();
//void hello();
//int main()
//{
//	int a[5]={11,22,33,44,55};
//		for(int i=0;i<4;i++)
//		{
//			printf(" %x\n",100+3*4);
//		}
//		
//		maan();
//		hello();
//}
//
//void maan()
//{
//	int a[5];
//	printf("Ente the value of array \n");
//	for(int i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//	 
//	}
//}
//
//void hello()
//{
//	int c[2][2];
//	int i=0,j=0;
//	for(i=0;i<2;i++)
//	{
//		scanf("%d",&c[i]);
//		for(j =0;j<2;j++)
//		{
//			scanf("%d",&c[j]);
//		}
//		
//		printf(" \n");
//	}
//}


int main() 
{
    int matrix[3][3]; // 3x3 matrix
    int i, j;

    // User ?? input ????
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
	{
        for(j = 0; j < 3; j++) 
		{
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Matrix ?? Display ????
    printf("\nMatrix is:\n");
    for(i = 0; i < 3; i++) 
	{
        for(j = 0; j < 3; j++) 
		{
            printf(" %x ", &matrix[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}

