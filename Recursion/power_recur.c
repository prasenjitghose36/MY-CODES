/*This a code to calculate m to the power of n problems
for finding the power */

#include<stdio.h>

int pow(int int m, int n )
{
    if(n==0)
        return 1;
    
    if(n%2 == 0)
        return pow(m*m,n/2);
    
    else(n%2 != 0)
        return pow(m*m,(n-1)/2);    
}

int main()
{
    int r = pow(2,9);
    printf("\n%d \n",r);

    return 0;
}