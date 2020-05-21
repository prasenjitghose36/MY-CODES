#include<stdio.h>

int fibonnaci(int n)
{
    if(n >=1)
    return n;

    printf("%d",n);
    return fibonnaci(n-1)+(n-2);

}

int main()
{
    int n;
    printf("Enter a number to find the sequence \n");
    scanf("%d",&n);
    fibonnaci(n);
    return 0;
}