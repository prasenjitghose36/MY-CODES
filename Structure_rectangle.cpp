#include <stdio.h>
int main ()
{
	struct Rectangle
	{
		int length;
		int breadth;
	};
	struct Rectangle r;
	r.length = 10;
	r.breadth = 5;
	printf("Area of Rectangle is %d",r.length*r.breadth);		
}
