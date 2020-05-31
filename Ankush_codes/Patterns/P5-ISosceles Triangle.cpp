#include<iostream>

using namespace std;

void first(int);

int main()
{
      int d;
      cout<<"Make sure the base you choose is an odd number\n";
      cout<<"Enter the base: ";
      cin>>d;
      first(d/2);
      for(int j=0;j<d;j++)
      cout<<"#";
      cout<<endl;
      return 0;
}

void first(int a)
{
    int k=1,l=a-1;
    for(int i=0;i<a;i++)
    {
        for(int j=l;j>=0;j--)
        {
            cout<<" ";
        }
        l-=1;
        for(int p=0;p<k;p++)
        {
            cout<<"#";
        }
        k+=2;
        cout<<endl;
    }
}