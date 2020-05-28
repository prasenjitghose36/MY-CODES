/*
//Array is a group of similar datatype.
//Array is a vector variable.
//Array also has dimension
//They are contigious

#include <stdio.h>
int main()
{
int A[5]; //The declaration of an array
int A[5] = {2,4,6,8,10}; //One method of intialization
int B[5] = {0};
//Rest of the value will be 0
//accessing the array elements
printf("%d ",A[1]); //printing the value in array

//traversing through an array
int i;
for(i=0;i<5;i++);
{
    printf("%d ", A[i]);
}

//another methods of declaring an array
printf("%d ",2[A]);
printf("%d ",*(A+2));
return 0;
}
*/
#include<stdio.h>
int main()
{
    int A[5];
    int B[5] = {1,2,3,4,5};
    int C[7] = {2,4,6};
    int D[5] = {0};
    int E[] = {1,2,3,4,5,6,7};
    int i;

    for(i=0;i<5;i++)
    printf("%d \n",A[i]);

    return 0;

}