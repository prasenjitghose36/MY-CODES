/* The datastructure array and its operations are 
called as ADT 
Operations are 
1.Dispaly()
2.Add(x)/Append(x)
3.Insert
3.Delete
4.search
5.Get(index)
6.set(index)
7.max()
8.reverse()
9.shift()/rotate()*/

//Displaying an array
/*
#include <stdio.h>

int main()
{
    int i;
    int A[10];
    printf("Enter 10 values in the array int only\n");
    for(i=0;i<10;i++)
    {
        scanf("\n %d \n",&A[i]);
    }
    printf("The array contains the following integers");
    for(i=0;i<10;i++)
    {
        printf("\n %d ",A[i]);
    }

    return 0;
}
*/

//Adding/Appending in the array
/*#include <stdio.h>

int main()
{
    int i;
    int A[10];
    printf("Enter 10 values in the array int only\n");
    for(i=0;i<6;i++)
    {
        scanf("\n %d \n",&A[i]);
    }
  
  //adding another element in it
  
    A[10] = 28;
    A[10]++;
    printf("The array contains the following integers");
    for(i=0;i<10;i++)
    {
        printf("\n %d ",A[i]);
    }

    return 0;

}
*/

//Inserting at any index
//example insert(4,15)
//This code contains all the function
#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[100];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);    
}

void Append(struct Array *arr,int x) 
{
    if(arr->length< arr->size)
        arr->A[arr->length++]=x;
    
}












































































