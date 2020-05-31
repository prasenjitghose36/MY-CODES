#include<iostream>

using namespace std;

void last(int);

int main()
{
      int d;
      cout<<"Make sure the base you choose is an odd number\n";
      cout<<"Enter the base: ";
      cin>>d;
      for(int j=0;j<d;j++)
      cout<<"#";
      cout<<endl;
      last(d/2);
      return 0;
}

void last(int a)
{
    int k=1,w=0,init=a*2-1;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=w;j++)
        {
            cout<<" ";
        }
        w+=1;
        for(int p=init;p>0;p--)
        {
            cout<<"#";
        }
        init-=2;
        cout<<endl;
    }
}