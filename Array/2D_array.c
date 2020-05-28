//-------- 2D array---------//

//There are three methods//
/* 1. int A[3][4] = {{1,2,3,4},{5,6,7,8},{9.10,11,12}};
    
   2. int *A[5]; arrays of array
        A[0] = new int[4];
        A[1] = new int[4];
        A[2] = new int[4];

        a[1][2] = 15;

    3. Double pointers
       int **A;
       A = new int*[3]
       A[0] = new int[4];
        A[1] = new int[4];
        A[2] = new int[4];

# Acessing this 2D array
    for(i=0;i<3;i++);
    {
        for(j=0;j<4;j++)
        printf("%d ",A[i])
    }
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9.10,11,12}};

    int *B[3];
    int i,j;
    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));

    int **C;

    C =(int**)malloc(3*sizeof(int *));
    C[0] = (int *)malloc(4*sizeof(int*));
    C[1] = (int *)malloc(4*sizeof(int*));
    C[2] = (int *)malloc(4*sizeof(int*));


    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\n");
            printf("%d \n",A[i][j]);
            printf("\n");    
        }
    }
return 0;
}






















