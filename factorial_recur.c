#include <stdio.h>

long int factorial(int n)
{
    long int result;

    if(n==0 || n==1)
        return 1;
    else
    
        return factorial(n-1)*n;           
    
    
}

int main()
{
    int a;
    long int n,result;
    printf("This is a factorial calculator programmed by Prasenjit Ghose on C \n");
    printf("\n Press 1 for caluclate the factorial limited upto 20 \n");
    printf("\n Press 0 to exit the calculator and have a nice day\n");
    scanf("%d",&a);
    if(a==1)
    {
    while(a>=0)
    {    
        printf("Enter a number to find its factorial: \n" );
        scanf("%ld",&n);
        factorial(n);
        printf("The result is: %ld \n",factorial(n));
        return 0;
    }
    }
    else if(a==0)
    {
        printf("Thank you for using our calculator greetings from PG \n");
    }
    else
    {
        printf("invalid input \n");
    }
}