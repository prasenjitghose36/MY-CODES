//static array means its size is static
//dynamic array means its size is dynamic
//In C++ we can create array with dynamic size
/* Example in C++
int n;
cin>>n;
int B[n];
*/
//Creating a array in Heap (Dynamic)
/* using pointer
int *p;
p = new int[5];
*/
//whenever we say new we can access it
//In C
//p =(int *)malloc(5*sizeof(int)); replacement of new in C
//Memory Leak Problem
//C++
//delete []P;
//C
//free(P);
//accessing the array

//A[0] = 5; 
//P[0] = 5;

//Heap array can be resized while stack array cannot be
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[10] = {2,4,6,8,10};
    int *p;
    int i;

    p = (int *)malloc(5*sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    for(i=0;i<5;i++)
        printf("%d ", A[i]);

    for(i=0;i<5;i++)
        printf("\n %d ", p[i]);   
    return 0;
}










