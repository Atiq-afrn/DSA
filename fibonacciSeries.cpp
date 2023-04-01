/*
 #include<iostream>
using namespace std;
int main()
{
  int limit,x, y,z;
  cout<<"\n Enter the the limit ";
  cin>>limit;
  x=0;
  y=1;
  z=0;
  while(z<=limit)
  {
   cout<<"\n"<<z;
   x=y;
   y=z;
   z=x+y;
  }
}

//fabonocci series using while loop

#include<iostream>
using namespace std;
int main()
{
   int rang,x,y,z;
   cout<<"\nEnter the rang ";
   cin>>rang;
   x=0;
   y=1;
   z=0;
   while(z<=rang)
   {
       cout<<"\n"<<z;
       x=y;
       y=z;
       z=x+y;
   }
}

// series using for loop

#include<iostream>
using namespace std;
int main()
{
 int rang,x=0,y=1,z;
 cout<<"Enter the rang of number\n";
 cin>>rang;

 for(z=0;z<=rang;z=x+y)
 {
   cout<<"\n"<<z;
   x=y;
   y=z;
 }
}


// print the fabonacci series upto nth terms using for loop

#include <iostream>
using namespace std;
int main()
{
  int term, x = 0, y = 1, z = 0, count=0;
  cout << "Enter the term up to find the series\n";
  cin >> term;
  for (;count <= term; count++)
  {
    cout << "\n"
         << z;
    x = y;
    y = z;
    z = x + y;
  }
}
*/
#include<iostream>
using namespace std;
int main()
{
  int term,x=0,y=1,z=0,count=1;
cout<<"Enter the term \n";
cin>>term;
while(count<=term)
{
  cout<<"\n"<<z;
  x=y;
  y=z;
  z=x+y;
  count=count+1;
}
}