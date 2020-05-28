/* Once the size of the array is assinged in the 
array suppose A[5] = {1,2,3,4,5,6}; we cannot increase
it's size anymore in stack memory allocation but we can 
do it very easily by allocating memory of the array in the 
heap for that we have take two pointers here is 
the example How it is done */ 
//program to increase the size of the array 
/*
Code in C++

#include<stdio.h>
#include<stdlib.h>

int main()
{
   int i;
   int *p = new int[5] = {1,2,3,4,5};
   int *q = new int[10];
   
   printf("Normal Array");
   for(i=0;i<5;i++)
   {
       printf("%d",p[i]);
   }

   for(i=0;i<10;i++)
   {
       p[] = q[];
   }
    delete []p;
    p -> q;
    q -> NULL;

    printf("Enter the values in increased array");
    for(i=0;i<10;i++)
    {
        scanf("%d ",&q[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("New array is %d ",&q[]);
    }
    return 0;
} 
*/

// Code in C

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,*q; //Taking two pointers
    int i;     

    p=(int *)malloc(5*sizeof(int));   //dynamically storing the value in heap memory
    p[0]=3;p[1]=5;p[2]=7;p[3]=9;p[4]=11; //intializing the values

    q= (int*)malloc(10*sizeof(int));  //this is auxillary pointer used to increase the size

    printf("The values before size increase \n"); //array when size is 5 only
    for(i=0;i<5;i++)
    {
        printf("%d \n",p[i]);
    }

    for(i=0;i<5;i++)
    {
        q[i] = p[i];
    }

    free(p);   //making the previous memory free
    p = q;     //copying the value of the array 
    q = NULL;  //auxillary array pointer points to NULL

    p[5]=13;p[6]=15;p[7]=17;p[8]=19;p[9]=21; //again intializing in the array which is increased

    printf("The values after size increase \n"); //printing the values after increasing the size
    for(i=0;i<10;i++)
    {
        printf("%d \n",p[i]);
    }

    return 0;
}

























