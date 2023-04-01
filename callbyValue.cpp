/*
  #include <bits/stdc++.h>
using namespace std;
void swap(int a, int b)
{
    int ati = a; // ati a b
    a = b;       //  5 5  7
                 //  5 7 5
    b = ati;     //  5 7 5
} //  this will not swape the value
void swapePointer(int *a, int *b) // this will swape the value due to call by refrence
{
    int ati = *a;
    *a = *b;
    *b = ati;
}

void swapepointerVar(int &a, int &b)
{
    int ati = a;
    a = b;
    b = ati;
}

int main()
{
    int a = 5, b = 7;
    cout << "The value of a=" << a << " the value of b=" << b << endl;
    // this will not swape the value
    // swape(a,b);
    swapePointer(&a, &b);
    cout << "The value of a=" << a << " the value of b=" << b << endl;
    swapepointerVar(a, b);

    
    cout << "the value of a=" << a << " the value of the b=" << b << endl;
}
  
// call by value program
#include<iostream>
using namespace std;
int value(int n,int b)
{
int v=n+b;
cout<<"sum of two number = "<<v<<endl;
cout<<"the value in block = "<<n <<" "<<b<<endl;

}
int main()
{
    int n,b;
    cout<<"enter first digit "<<endl;
    cin>>n;
    cout<<"enter the second digit"<<endl;
    cin>>b;
    value(n,b);
    cout<<"the value in block = "<<n <<" "<<b<<endl;



}


#include<iostream>
using namespace std;
int atiq(int nu)
{
    nu=nu*nu;
    cout<<"sum ="<<nu<<endl;
}
int main()
{
int n;
cout<<"enter the number "<<endl;
cin>>n;
atiq(n);
cout<<"value in main block = "<<n<<endl;
}


// call by reference 
#include<iostream>
using namespace std;
int chegg(int &i){
    i=i*i*i;
    cout<<"The value in function = "<<i<<endl;

}
int main()
{
    int n;
    cout<<"Enter the first number "<<endl;
    cin>>n;
    cout<<"The value in main function "<<n<<endl;
    chegg(n);
}
*/
#include<iostream>
using namespace std;
int swap(int &x,int &y);
{
    int ati=x;
    x=y;
    y=ati;
    cout<<"X = "<<x<<endl<<"Y = "<<y<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter the numbers "<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"a = "<<a<<endl<<"a = "<<b<<endl;
}
