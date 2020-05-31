
#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the number of stairs: ";
    cin>>a;
    for(int i=a;i>0;i--)
    {
        for(int j=0;j<i;j++)
        cout<<"#";
        cout<<"\n";
    }
    return 0;
}