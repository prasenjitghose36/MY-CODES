/*passing a structure using call by value
#include<stdio.h>
struct Rectangle
{
	int length;
	int breadth;
};
int area(struct Rectangle &r1)
{
	r1.length++;
	r1.breadth++;
	return r1.length*r1.breadth;
}
int main()
{
	struct Rectangle r ={10,1};
	printf("The area of the rectangle is = %d",area(r));
	return 0;
}
*/
//passing a structure to a function using call by address
#include<stdio.h>
struct Rectangle
{
	int length;
	int breadth;
};

void changelength(struct Rectangle *p, int l)
{
	p->length = l;
	
}
int main()
{
	struct Rectangle r = {10,5};
	changelength(&r,20);
	printf("The new length and breadth are: %d",changelength(r));
	return 0;
}
