#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
int length;
int breadth;	
};

int main()
{
	struct Rectangle r;
	struct Rectangle *p = &r; //first every time we have to declare our pointer and assing the address of the structure before using it to dynamically allocate to a function.
	p = (struct Rectangle*)malloc(sizeof(struct Rectangle));
	//malloc function is used to dynamically assing a value in the heap and hence heap is used for dynamic memory allocation in heap
	p ->length = 1;
	p ->breadth = 2;
	printf("The area of the rectangle is: %d",p->length*p->breadth);
}
