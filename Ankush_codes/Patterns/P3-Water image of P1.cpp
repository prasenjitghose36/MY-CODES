
#include<iostream>

using namespace std;

int main()
{
    int a,k=0;
    cout<<"Enter the number of stairs: ";
    cin>>a;
    for(int i=a;i>0;i--)
    {
        for (int h=0;h<k;h++)
        cout<<" ";
        k++;
        for(int j=0;j<i;j++)
        cout<<"#";
        cout<<endl;
    }
    return 0;
}