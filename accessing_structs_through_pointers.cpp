#include<stdio.h>
struct Rectangle
{
	int length;
	int breadth;
};
int main()
{
	struct Rectangle r;
	struct Rectangle *p = &r;
	
	p->length = 90; //we can also write(*p).length = 90
	p->breadth = 40; //we can also write(*p).breadth = 40
	printf("The area of the Rectangle is %d",p->length*p->breadth);
	return 0;
}
