// #include<iostream>
// using namespace std;
// int main()
// {
//     system("cls");
//     int a,sum=0,b;
//     cout<<"enter the number...";
//     cin>>a;
//     b=a;
//     while(a>0)
//     {
//         sum=sum+(a%10)*(a%10)*(a%10);
//         a=a/10;
//     }
//     cout<<"result="<<sum<<" ";
//     if(sum==b)
//     {
//         cout<<"the number is armstrong..";
//     }
//     else
//     {
// cout<<"this is not armstrong number..";
//     }

// }

// practice of armstrong number
/*
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int a,sum=0,x;
    cout<<"enter the number to find armstrong number ";
    cin>>a;
    x=a;
    while(a>0)
    {
        sum=sum+(a%10)*(a%10)*(a%10);
        a=a/10;
    }
    cout<<"Result="<<sum<<endl;
    if(x==sum)
    {
        cout<<"the number is armstrong number ";
    }
    else
    {
cout<<"the number is not armstrong..";
    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, sum=0,x;
    cout<<"enter the number "<<endl;
    cin>>a;
    x=a;
    while(a>0)
    {
        sum=sum+(a%10)*(a%10)*(a%10);
        a=a/10;
    }
    if(x==sum)
    {
        cout<<x<<"= this number is armstrong number ";
    }
    else{
        cout<<"this number is not armstrong number ";
    }


}


#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,x,count;
    cout<<"Enter the number "<<endl;
    cin>>n;
    n=x;
    for(int i=1;i>=count;i++)
    {
        sum=sum+(n%10)*(n%10)*(n%10);
        n=n/10;
        sum=y;
    }

}

// count hom many digit in a number 
#include <iostream>
using namespace std;
int main()
{
    int a, i=0;
    cout << "Enter the number" << endl;
    cin >> a;
    while (a > 0)
    {
        a = a / 10;

        i = i + 1;
    }
    cout << i;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"Enter the number "<<endl;
    cin>>a;
    for( i=0 ;i>0;i--){
        a=a/10;
        i=i+1;
    }
    cout<<i;
}
