// #include<bits/stdc++.h>
// using namespace std;
// int a;  // extern(global)
// int main()
// {
// int b;   //local stroge class(auto)
// static int c;//(static)
// register int d;
// cout<<a<<endl;
// cout<<b<<endl;
// cout<<c<<endl;
// cout<<d<<endl;

// }


// #include<bits/stdc++.h>
// using namespace std;
// int fun()
// {
//    int a=40;
//     static int b=40;
//     cout<<a<<endl<<b<<endl;
//     a++;b++;
// }
// int main()
// {
//     fun();
//     fun();
//     fun();

// }

#include<bits/stdc++.h>
using namespace std;
int a=30;  //global(extern)
int fun()
{
    cout<<a<<endl;
}
int main()
{
    int b=50;
    fun();
    fun();
    fun();
    fun();

}