/*
 //  friend class 


#include <bits/stdc++.h>
using namespace std;
class Employee
{
private:
    string phno;

public:
    string name;
    void setphoneN(string phoneNumber)
    {
        this->phno = phoneNumber;
    }
    friend class Car;
};

class Car
{
public:
    string carname;
    void display(Employee emp)
    {
        cout << "Employee name=" << emp.name << endl
             << "phone=" << emp.phno << endl
             << "Car name=" << carname << endl;
    }
};
int main()
{
    Employee emp1;
    emp1.name = "Atiqullah khan";
    emp1.setphoneN ( "8707435104");

    Car car;
    car.carname="Audi";
   car.display (emp1);
}*/
// friend function


#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string phno;

private:
    string name;
    void setphoneN(string phoneNumber)
    {
        this->phno = phoneNumber;
    }
    friend void display(Employee); // function definition
};

class Car
{
public:
    string carname;
    void display(Employee emp)
    {
        cout << "Employee name=" << emp.name << endl
             << "phone=" << emp.phno << endl
             << "Car name=" << carname << endl;
    }
};
int main()
{
    Employee emp1;
    emp1.name = "Atiqullah khan";
    emp1.setphoneN ( "8707435104");

    Car car;
    car.carname="Audi";
   car.display (emp1);
}