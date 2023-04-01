// #include<iostream>
// using namespace std;
// union khan
// {
//     int rollno;
//     char name[30];
//     float marks;
// };
// int main()
// {
// union khan k;
// cout<<"enter student rollno; ";
// cin>>k.rollno;
// cout<<k.rollno;
// cout<<"enter student name :";
// cin>>k.name;
// cout<<k.name;
// cout<<"enter student marks: ";
// cin>>k.marks;
// cout<<k.marks;
// }


#include<bits/stdc++.h>
using namespace std;
union atiq
{
    int rollno;
    char name[40];
    double marks;
};
int main()
{
    system("cls");
     union atiq b;
    cout<<"enter the student roll number"<<endl;
    cin>>b.rollno;
    cout<<"student rollno="<<b.rollno<<endl;
    cout<<"enter the student name"<<endl;
    cin>>b.name;
    cout<<"student name="<<b.name<<endl;
    cout<<"enter the student marks"<<endl;
    cin>>b.marks;
    cout<<"student marks="<<b.marks;
}