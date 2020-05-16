#include<stdio.h>

int treerecur(int n)
{
    if(n>0)
    {
        printf("%d \n",n);
        treerecur(n-1);
        treerecur(n-1);
    }
    return 0;    
}

int main()
{
    int n = 5;
    printf("The values of the recursive trees are as follows: \n");
    treerecur(n);
    return 0;
}
