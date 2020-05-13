//Tower of Hanoi 
//By Prasenjit Ghose


#include<stdio.h>

void TOH(int n,char source,char destination,char auxillary)
{
    if(0== n)
    return;
    
    TOH(n-1,source, auxillary, destination);
       printf("move the objects %d from %c to %c \n", n, source, destination);
    TOH(n-1, auxillary, destination, source);
    
}

int main()
{
    TOH(3, 'S', 'D', 'A');

    return 0;

}
