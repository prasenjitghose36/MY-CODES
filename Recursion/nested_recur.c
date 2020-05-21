/*In a nested recursion the function will pass a parameter
as a recursive call if a function call itself and also the function 
passes a parameter as the same function
A recursive call takes a recursion as a parameter
*/
#include<stdio.h>

int fun(int n)
{
    if(n>100)
        return n-10;
    return fun(fun(n+11)); //nested recursion
        
}

int main()
{
    int r;
    r = fun(96);
    printf("%d\n",r);
    return 0;
}