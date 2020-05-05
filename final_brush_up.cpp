#include<stdio.h>
struct Rectangle 
{
	int length;
	int breadth;
};

void initialize(struct Rectangle *r,int l,int b)
{
	r->length = l;
	r->breadth = b;
}
int area(struct Rectangle r)
{
	return r.length*r.breadth;
}
void changelength(struct rectangle *r,int l)
{
	r->length = l;
}
int main()
{
	struct Rectangle r;
	
	initialize(&r,10,5);
	printf("The area of the rectangle is: %d",area(r));
	changelength(&r,20);
	printf("The area of the rectangle is: %d",area(r));
	return 0;
}

