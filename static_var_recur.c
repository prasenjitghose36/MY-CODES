#include<stdio.h>
int x = 0;
int statico(int n)
{
    if(n>0)
    {
        x++;
        return statico(n-1)+x;
    }
    return 0;
}

int main()
{
    int n = 5;
    statico(n);
    printf("%d \n",statico(n));
    return 0;
}