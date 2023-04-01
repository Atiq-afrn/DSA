/*

 #include <bits/stdc++.h>
using namespace std;
class Dog
{
public:
    int age;
    string breed;
    string name;
    Dog(int, string, string); // parametrized constructor decleration
    Dog();                    // default constructor decleration
    void displaydetails();
    ~Dog();
};
Dog::~Dog()
{
    cout << "The object of class is being deleted" << endl;
}
// default constructor
Dog ::Dog()
{
    cout << "dog object is created" << endl;
}
Dog::Dog(int age, string breed, string name)
{
    this->age = age;
    this->breed = breed;
    this->name = name;
}
void Dog::displaydetails()
{
    cout << "pet age=" << age << endl;
    cout << "pet breed=" << breed << endl;
    cout << "pet name=" << name << endl;
}
int main()
{
    Dog at1(1, "german", "wave");
    at1.displaydetails();
}*/

#include <bits/stdc++.h>
#include <string>
using namespace std;
class Khan
{

 int a, b;

public:
 
    // constuctor is  special type of member function which is
    // automatically invocked when an  object is created
    // it is used for initialising the object of the class
   // Khan(void);
    void printvalue();
};
void Khan::printvalue()
{
    cout << "your number is " << a << " + " << b << " i " << endl;
}
// Khan::Khan(void)
// {
//     a = 34;
//     b = 0;
// }
int main()
{
    Khan k;
    k.printvalue();
}