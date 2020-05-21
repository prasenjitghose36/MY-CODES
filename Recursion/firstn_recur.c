//This is a Program to find the sum of natural number
//using recursion

#include<stdio.h>

int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

int main()
{
    int r;
    printf("Enter a Number to find out it's natural number sum: \n");
    scanf("%d",&r);
    r = sum(r); //very important to again intialize with the value of r which was previously the value entered
    printf("The sum first n natural number is \n %d \n",r);   

}
