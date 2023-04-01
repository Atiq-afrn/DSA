// #include<iostream>
// using namespace std;
// int main ()
// {
//     int a=98;
//     while(a>=0)
//     {
//     cout<<a<<endl;
//     --a;
//     }
// return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int ati,count=0;
    cout<<"enter your number: ";
    cin>>ati;
    while(ati>0)
    {
        ati=ati/10;
        count++;
    }
    cout<<count;
}