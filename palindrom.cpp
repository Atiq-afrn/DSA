// #include<iostream>
// using namespace std;
// int main ()
// {
//     system("cls");
//     int i ,rev=0 ,orig;
//     cout<<"enter to print revers of the number..";
//     cin>>i;
//  orig=i;
//     while(i>0)
//     {
//         rev=(rev*10)+i%10;
//         i=i/10;
//     }
//         cout<<"result="<<rev<<" ";
//         if (orig==rev)
//         {
//             cout<<"the number is pelindrome"<<endl;
//         }
//         else
//         {
//          cout<<"number is not pelindrom number..";
//         }
// }

// the pelindrom number using for loop

//     cout<<"enter the number to print pelindrom.."<<endl;
//     cin>>i;
//     orig=i;
//     for(;i>0;i=i/10)
//     rev=rev*10+i%10;

//      {
//          cout<<"result="<<rev;
//      }
//     if(orig==rev)
//     {
//         cout<<"the number is pelindrom.."<<endl;
//     }
//     else
//     {
//      cout<<"the number is not pelindrom";
//     }

// #include<iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     int a,rev=0,x;
//     cout<<"enter the number to find pelindrom number..";
//     cin>>a;
//     x=a;
//     while(a>0)
//     {
//         rev=(rev*10)+a%10;
//         a=a/10;
//     }
//     cout<<"pelindrom=
//     <<rev<<endl;
//     if(x==rev)
//     {
// cout<<"this is pelindrom number..";
//     }
// else
// {
// cout<<"this is not a pelindrom number ";
// }
// }

/*
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int i,rev=0;
     int orig;
    cout<<"ennter the number to find number is  pelindrom or not"<<endl;
    cin>>i;
    orig=i;
    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    if(rev==orig)
    {
        cout<<"this number is pelindrom numer"<<endl;

    }
    else{
        cout<<"this number is not pelinderom number"<<endl;
    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,rev=0;
    int x;

    cout<<"Enter the number to print the reverse "<<endl;
    cin>>a;
      x=a;
    while(a>0)
    {
        rev=(rev*10)+a%10;
        a=a/10;

    }
    cout<<"result="<<rev;
    if(rev==x)
    {
        cout<<"  this number is pelindrom "<<endl;
    }
    else{
        cout<<"  this number is not pelindrom number"<<endl;
    }

}
*/
#include <iostream>
using namespace std;
int main()
{
    int i, rev = 0;
    int x;
    cout << "enter the number" << endl;
    cin >> i;
    x= i;
    while (i > 0)
    {
        rev = (rev * 10) + i % 10;
        i = i / 10;
    }

    if (rev == x)
    {
        cout << "this number is pelindrom number = " << rev << endl;
    }
    else
    {
        cout << "This number is not pelindrom number " << endl;
    }
}
