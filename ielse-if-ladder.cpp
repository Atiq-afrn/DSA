// #include<iostream>
// using namespace std;
// int main ()
// {
// 	int a,b ,ch ,sub,mult,add, div;
// 	cout<<"enter two number";
// 	cin>>a>>b;
// 	cout<<"enter choice";
// 	cin>>ch;
// 	if(ch==1)
// 	{
// 		add=a+b;
// 		cout<<add;
// 	}
// 	else if(ch=2)
// 	{
// 		sub=a-b;
// 		cout<<sub;
// 	}
// 	else if (ch==3)
// 	{
// 		mult=a*b;
// 		cout<<mult;
// 	}
// 	else if(ch==4)
// 	{
// 		div==a/b;
// 		cout<<div;
		
// 	}
// 	else
// 	{
// 	cout<<"invalid task";	
// 	}
// }
  
  #include<iostream>
  using namespace std;
  int main()
  {
	double a,b,add,sub,multi,div;
	string cho;

	cout<<"ENTER TWO NUMBER ";
	cin>>a>>b;
	cout<<"enter your choice ";
	cin>>cho;
	if(cho=="add")

	{
	add=a+b;
	cout<<add;
	}
	else if(cho=="sub")
	{
		sub=a-b;
		cout<<sub;
	}
	else if(cho=="multi")
	{
		multi=a*b;
		cout<<multi;
	}
	else if(cho=="div")
	{
		div=a/b;
		cout<<div;
	}
	else{
		cout<<"INVALID OPRATION";
	}

	}