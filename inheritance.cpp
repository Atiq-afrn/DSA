/*
#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    int age;
    string color;
    void run()
    {
        cout << "running" << endl;
    }
};
class Dog : public Animal
{
public:
    // int age;
    // string color;
    string petname;
    void bark()
    {
        cout << "barking" << endl;
    }
};

class Lion : public Animal
{
public:
    // int age;
    // string color;
    void roar()
    {
        cout << "Roaring" << endl;
    }
};
int main()
{
    Dog dog1;
    dog1.age = 4;
    dog1.color = "black";
    dog1.petname = "Rocky";
    dog1.bark();
    dog1.run();


    Animal ani;
    ani.age=3;
    ani.color="white";
    ani.run();
    cout<<"Age of animal="<<ani.age<<endl;

}*/

#include <bits/stdc++.h>
using namespace std;
class Human
{
public:
    int age;
    string fullname;
    string phonenumber;
};
class Student : public Human
{
public:
    int sid;
    string schoolname;
    void study()
    {
        cout << "Studying" << endl;
    }
    void studentdetails()
    {
        cout << "student ID=" << sid << endl;
        cout << "school name=" << schoolname << endl;
        cout << "student age=" << age << endl;
        cout << "phone No=" << phonenumber << endl;
    }
};

class Employee : public Student
{
public:
    int employeeId;
    string companyname;
    void work()
    {
        cout << "Working" << endl;
    }
    void employeedetails()
    {
        cout << "employeeId=" << employeeId << endl;
        cout << "Age=" << age << endl;
        cout << "name=" << fullname << endl;
        cout << "phone No.=" << phonenumber << endl;
        cout << "Company name=" << companyname << endl;
    }
};
int main()
{
    Employee at1;
    at1.employeeId = 231;
    at1.age = 31;
    at1.fullname = "Atiq khan";
    at1.phonenumber = "8707435104";
    at1.companyname = "technology";
    at1.employeedetails();
}
