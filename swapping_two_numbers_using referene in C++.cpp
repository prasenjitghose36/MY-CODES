#include<iostream>
using namespace std;
void swap(int &a,int &b) // so x and y are nicked-named as a and b
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 10,y = 20;
	//int &a = x;
	//int &b = y;
	swap(x,y);
	cout<<"After swapping"<<endl<<"x ="<<x<<endl<<"y ="<<y<<endl;
	return 0;
}
