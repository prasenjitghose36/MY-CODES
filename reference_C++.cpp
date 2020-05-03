#include<iostream>
using namespace std;
int main()
{
	int a =10;
	int &r =a; //assing a reference to a using &amp
	cout<<a<<endl;
	r++;
	cout<<r<<endl;
}
