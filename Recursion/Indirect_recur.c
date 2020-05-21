#include<stdio.h>

void funB(int n); //function prototyping since function B was used before declaring it in the function.
void funA(int n ) //function A
{
    if(n>0)
    {
        printf("%d \n",n);
        funB(n-1); //always remember prototyping it
    }
}
void funB(int n)  //indirect recursion is like a cycle in which the function is called in a cyclic way
{
    if(n>1)
    {
        printf("%d \n",n);
        funA(n/2);
    }
}

int main()
{
    funA(20);
    return 0;
}