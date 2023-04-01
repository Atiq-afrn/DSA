// #include<iostream>
// using namespace std;
// int main()
// {
//     system("cls");
// cout<<"Execution begins..."<<endl;
// int a,b,c;
// cout<<"enter numbers..";
// cin>>a>>b;
// try
// {
//     if(b==0)
//     throw b;
// c=a/b;
// cout<<"Result..."<<c<<endl;
// }
// catch(int x)
// {
//    cout<<"can't devide by "<<x<<endl;
// }

// cout<<"execution terminated..."<<endl;
// }

// practice

// #include<iostream>
// using namespace std;
// int main ()
// {
//     system("cls");
//     int a,b,c;
//     cout<<"execution begins .."<<endl;
//     cout<<"enter two numbers..";
//     cin>>a>>b;
//     try
//     {
//        if(b==0)
//        throw b;
//        c=a/b;
//        cout<<"result  "<<c<<endl;
//     }
//     catch(int x)
//     {
//         cout<<"the digit can't divided by zero.."<<endl;
//     }
//     cout<<"compilation terminated...";
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     int a,b,c;
//     cout<<"enter the number to divide"<<endl;
//     cin>>a>>b;
//     try
//     {
//         if(b==0)
//         {
//            throw b;
//            c=a/b;
//            cout<<"result"<<c;
//         }
//     }
//     catch(int x)
//     {
//        cout<<"this number can not be divide"<<endl;
//     }
//     cout<<"compilation terminated ";

// }

/*
#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
   int a,b, r;
   cout<<"enter the number,,"<<endl;
   cin>>a>>b;
   try
   {
      if(b==0)
      {
       throw b;
      r=a/b;
      cout<<"result="<<r;
      }
   }
   catch(int x)
   {
   cout<<"this number can't be divided by zero";
   }

}
#include <bits/stdc++.h>
using namespace std;
int main()
{
   float a, b, result;
   cout << "Enter the number devide " << endl;
   cin >> a >> b;
   try
   {
      if (b == 0)
      {
         throw b;
         result = a / b;
         cout << "final value=" << result << endl;
      }
   }
   catch (int x)
   {
      cout << " this number cant be devided by zero" << endl;
   }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
   float a, b, result;
   cout << "Enter the number to find the calculation" << endl;
   cin >> a >> b;
   try
   {
      if (b == 0)
         throw " The value of b must not be zero ";

      result = a / b;
      cout << result << endl;
   }

   catch (const  char *msg)
   {
      cout <<msg << endl;
   }
}*/
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
   int b;
   cout<<"Enter the number"<<endl;
   cin>>b;
   try
   {
      if(b<0)
      throw "The value of b must greater than 0";

      int result=sqrt(b);
      cout<<"square root  of the given number="<<result<<endl;
   }
   catch(const char *msg)
   {
     cout<<msg<<endl;
   }
   

}