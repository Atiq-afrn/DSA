// #include<iostream>  OBJECT MACRO
// #define khan 10
//  using namespace std;
// int main()
// {
//     int i,r;
//     for(i=1;i<=10;++i)
//     {
//        r=khan*i;
//         cout<<khan*i<<endl;

//     }
// }

// FUNCTION MACRO

// #include<iostream>
// #define ati(a,b) ((a>b)?a:b)
// using namespace std;
// int main ()
// {
//     cout<<ati(344,555)<<endl;

//     cout<<ati(344,555)<<endl;

//     cout<<ati(344,555)<<endl;

//     cout<<ati(344,555)<<endl;

//     cout<<ati(344,555);

// }

//preprocessor directive 

// #include<bits/stdc++.h>
// #define ati 10
// using namespace std;
// int main()
// {
//     int re,i;
//     for(i=1;i<=10;i++)
//     {
//     re=ati*i;
//     cout<<ati<<"*"<<i<<"="<<re<<endl;
//     }

// }
/*
#include<bits/stdc++.h>
#define khan(a,b) ((a>b)?a:b)
using namespace std;
int main()
{
    cout<<khan(23,465)<<endl;
    cout<<khan(234,46)<<endl;
    cout<<khan(234,35)<<endl;
    cout<<khan(234,465)<<endl;
    cout<<khan(24,465)<<endl;
    cout<<khan(234,45)<<endl;
}

 // macro with parameter

#include <bits/stdc++.h>
using namespace std;
#define ATIQ_KHAN 90
#define AREA(r) (3.14 * r * r) // macro with parameter
int main()
{
     for (int i = 0; i <= ATIQ_KHAN; i++)
     {
         if (i % 2 == 0)
             cout << i << endl;
     }

     find the area of the circle

    cout << "Area=" << AREA(8);  // 3.14*8*8;
}*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 #define AREA(l,b) (l*b)
 int main()
 {
    cout<<"Area of the rectangle="<<AREA(5,6);
 }
