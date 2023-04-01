//by using the structure record the student information and print the record 
// #include<iostream>
// using namespace std;
// struct khan  
// {
//     int rollno;
//     float marks;
//     char name [40];

// };
// int main()
// {
// struct khan k;   
//     system("cls");
// cout<<"enter student roll number: ";
// cin>>k.rollno;
// cout<<"enter student mark: ";
// cin>>k.marks;
// cout<<"enter student name: ";
// cin>>k.name;
// cout<<k.rollno<<endl<<k.marks<<endl<<k.name;
// }


// #include<bits/stdc++.h>
// using namespace std;
// struct khan
// {
//     int marks;
//     char name;
//     int rollno;
// };
// union khan2
// {
//     int marks;
//     char name;
//     double rollno;
// };
// int main()
// {
// struct khan a;
// union khan2 s;
// cout<<"structure size="<<sizeof(a)<<endl;
// cout<<"union size="<<sizeof(s);



// by using the structure print the detail of the __STDCPP_DEFAULT_NEW_ALIGNMENT
#include<bits/stdc++.h>
using namespace std;
struct khan
{
    int rollno;
    char name[30];
    int marks;

};
int main()
{
    system("cls");
    struct khan b;
    cout<<"enter student rollno"<<endl;
    cin>>b.rollno;
    cout<<"enter the student name"<<endl;
    cin>>b.name;
    cout<<"enter the student marks"<<endl;
    cin>>b.marks;  

    cout<<"studen rollno="<<b.rollno<<endl;
    cout<<"student name="<<b.name<<endl; 
   cout<<"student marks="<<b.marks; 
}
