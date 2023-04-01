/*
#include<iostream>
using namespace std;
int main()
{
    int price;
    cout<<"Enter the price of the item"<<endl;
    cin>>price;
    cout<<"Enter the choice "<<endl;

    int choice;
    cin>>choice;
    switch (choice)

    {
    case 1:
        cout<<"Student"<<endl;
        break;
    case 2:
    cout<<"Other"<<endl;
    default:
        break;
    }
    if(price>500 && choice ==1)
    {
        cout<<"you are aligible for 10% discount"<<endl;
    }
    else{
        cout<<"you are eligible for 5% discount"<<endl;
    }


}*/
// write a program to check weather the number is divisible by both or not the number is 2,3;
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << sizeof(n) << endl;
    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "the number is divisible by both" << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "the number is divided by 2" << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "The number is divided by 3" << endl;
    }
    else
    {
        cout << "The number is not divided by non of these" << endl;
    }
}
