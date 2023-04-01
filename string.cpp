//  #include<iostream>
//  #include<string.h>
//  using namespace std;
//  int main ()
// // {system("cls");
// //     char str[]="Atiq ";

// //     cout<<str<<endl;
// //     int r=strlen(str);        //strlen is predefine function so we have to include string.h
// //     cout<<r;
//  {    system("cls");
//      char str[]="Atiq";
//          cout<<str<<endl;
//      strrev(str);
//      cout<<str;
//   }
//

// }

// #include<iostream> // how to add two string in program this the way how to add
// #include<string.h>
// using namespace std;
// int main ()
// {
//     system("cls");
//     char str[]="Atiq";
//     char str2[]="khan";
//     strcat(str,str2);
//     cout<<str<<" ";

// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main ()
// {
//     system("cls");
//     char str[]="atiq khan";

//     strupr(str);
//     cout<<str;
// }

// program to find the lenght of string

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     system("cls");
//     char str[]="atiq-khan";
//    int r=strlen(str);
//     cout<<r;
// }

// program to find reverse of the string
//  #include<bits/stdc++.h> //
//  using namespace std;
//  int main()
//  {
//      system("cls");
//      char str[10];
//      cout<<"enter the name to print the reverse ";
//      cin>>str;
//      strrev(str);
//      cout<<str;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char str[20];
//     cout<<"enter the name ";
//     cin>>str;
//    int r=strlen(str);
//     cout<<r;
// }
// program to add two string by predefine function strcat concotination
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char str1[20];
//     char str2[20];
//     cout<<"enter the name";
//     cin>>str1>>str2;
//     strcat(str1,str2);
//     cout<<str1;

// }

// program to convert the upper case to lower case and lower case to upper case
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     system("cls");

//     char str[20];
//     cout<<"enter the name to print uppercase"<<endl;
//     cin>>str;
//     strupr(str);
//     cout<<str;
// }

// program toprint lower case of the upper case of string
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
char str[20];
cout<<"enter the word"<<endl;
cin>>str;
strlwr(str);
cout<<str;
}


#include<iostream>
#include<string>
using namespace std;
int main()
{
    // bool lovingisdying=true;
    // if (lovingisdying)
    // {
    //     cout<<"lets code more.\n";
    // }
    // else
    // {
    //     cout<<"find another job";
    // }


    // cout<<true + 7;

int s = (rand() % 23) + 1;
cout<<s;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{

    string ati;
    // cin>>ati; this code will take only first character eg if we enter the atiq khan but it only take atiq
    getline(cin, ati); // this work As taking input

    // cout << ati;
    string s1 = "atiq";
    string s2 = "khan";
   //s1=s1+ s2;

    cout << s1+s2<<endl;
    // how to acces  alphsbets of a string
    cout<<"character of the "<<endl;

    cout<<s2[2];

}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter the array" << endl;
    string at;
    getline(cin, at);
    int i = 0;
    while (at[i] != '\0')
    {
        cout << at[i] << endl;
        i++;
    }
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char at[20];
    cout << " enter the character" << endl;
    cin >> at;
    strlen(at);
    cout<<at;
}
