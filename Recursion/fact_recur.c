#include<stdio.h>

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    return factorial(n-1)*n;    
}

int main()
{
    int r;
    printf("\n\nEnter the number to find the factorial:\n");
    scanf("%d",&r);
    r = factorial(r);
    printf("\nCoded By Prasenjit Ghose\n");
    printf("\nThe factorial of the number is %d\n\n",r);

    return 0;
}