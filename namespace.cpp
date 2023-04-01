#include <bits/stdc++.h>
using namespace std;
namespace ind
{
    float dollarValue = 76; // 1 $ equal to 76
    float toDollar(float currencyUnit)
    {
        return currencyUnit/dollarValue;
    }

}
namespace pak
{
    float dollarValue = 200; // 1$ equal to 200 pak currency;
       float toDollar(float currencyUnit)
    {
        return currencyUnit/dollarValue;
    }
}

int main()
{
    cout<<"1 USD="<<ind::dollarValue<<" indian rupees"<<endl;
    cout<<"1 USD="<<pak::dollarValue<<" pakistani currency"<<endl;

    cout<<"5000 rupees="<<ind::toDollar(5000)<<" USD"<<endl;
    cout<<"90000 pak currency="<<pak::toDollar(90000)<<" USD"<<endl;
}