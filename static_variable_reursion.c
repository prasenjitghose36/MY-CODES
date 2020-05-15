#include<stdio.h>

int fun(int n)
{
    int y;
    if(n>0)
    {
     fun(n-1)+n;
     printf("The result is %d",fun(n)); 
    }
    return 0;
}
int main()
{
    int y,n;
    int x = 5;
    fun(x);
    return 0;
}