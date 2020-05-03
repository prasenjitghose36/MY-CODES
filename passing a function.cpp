//pass by value in function
#include<stdio.h>
add(int x, int y )
{
	int z;
	z = x+y;
	return z;
}
int main()
{
	int a,b,c;
	printf("Enter two numbers to add them");
	printf("\nEnter first number");
	scanf("%d",&a);
	printf("\nEnter second number\n");
	scanf("%d",&b);
	c = add (a,b);
	printf("The Value after addition = %d",c);
}

//pass by address in parameter passing
#include <stdio.h>
 
void swap(int*, int*);
 
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(&x, &y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}

//pass by reference in the function
#include<stdio.h>
void swap(int &a,int &b);
{

	int temp;
	
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int x,y;
	
	printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(x, y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}



