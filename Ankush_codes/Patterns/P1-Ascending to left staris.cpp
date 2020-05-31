
#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the number of stairs: ";
    cin>>a;
    int h=1;
    for(int i=0;i<a;i++)
    {
        for(int k=0;k<h;k++)
        {
            cout<<"#";
        }
        h++;
        cout<<"\n";
    }
    return 0;
}