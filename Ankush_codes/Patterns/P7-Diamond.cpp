#include<iostream>

using namespace std;

void first(int);
void last(int);

int main()
{
      int d;
      cout<<"Make sure the Diameter you choose is an odd number\n";
      cout<<"Enter the Diameter: ";
      cin>>d;
      first(d/2);
      for(int j=0;j<d;j++)
      cout<<"#";
      cout<<endl;
      last(d/2);
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

void last(int a)
{
    int w=0,init=a*2-1;
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