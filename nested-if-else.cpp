#include<iostream>
using namespace std;
int main ()
{
   double a,b,c;
   cout<<"enter your three digit number ";
cin>>a>>b>>c;
if(a>b)
{
    if(a>c)
    {
cout<<"a="<<a;
    }
    else
    {
cout<<"c="<<c;
    }
    }
    else
    {
if(b>c)
{
    cout<<"b="<<b;
}
else{
    cout<<"c="<<c;
}
    }
}
