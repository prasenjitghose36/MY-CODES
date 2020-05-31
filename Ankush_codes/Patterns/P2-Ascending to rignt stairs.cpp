
#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the number of stairs: ";
    cin>>a;
    int s=a-1,h=1;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<s;j++)
        {
            cout<<" ";
        }
        s--;
        for(int k=0;k<h;k++)
        {
            cout<<"#";
        }
        h++;
        cout<<"\n";
    }
    return 0;
}