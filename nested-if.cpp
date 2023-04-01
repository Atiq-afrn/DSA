/*

#include<iostream>
using namespace std;
int main ()
{
	int a=10,b=20,c=30;
	if(a>b) 
	{
	if (a>c)
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
}
	}  */

	#include<iostream>
    using namespace std;
	int main()
	{
		int a,b,c;
		cout<<"enter the three number to print largest number"<<endl;
		cin>>a>>b>>c;
		if(a>b) 
		{
			if(a>c) 
			{
				cout<<a<<endl;
			}
			else
			{
				cout<<c<<endl;
			}
			if(b>c)
			{ 
			cout<<b<<endl; 
			}
		}
	}