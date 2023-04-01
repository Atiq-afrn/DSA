#include<bits/stdc++.h>
using namespace std;
void display(int , float ,string="khan");
int main()
{
//funtion :default parameters
display(30,45.54," hay! hope you doing great");
 display(45,56.6);           //  here we get error by compiler
// becoz we only call two parameter but we define
// three three parameter in function decleration
return 0;
}
void display(int num1,float num2,string messages)
{
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<messages<<endl;
}
