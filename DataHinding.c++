/*  
  #include <bits/stdc++.h>
using namespace std;
class Circle
{
private:
    float radius;

public:
    void setRadius(float radius)
    {
        this->radius = radius;
    }
    double getArea()  // data abstraction mean hiding data
    {
        return 3.14 * radius * radius;
    }
};
int main(){
    Circle circle;
    circle.setRadius(6);
    float area=circle.getArea();
    cout<<"area of the circle="<<area;
}

#include<bits/stdc++.h>
using namespace std;
class Person{
    protected:
    string phoneNo;
    public:
    string fullname;

    void setphoneNumber(string phoneNo)
    {
        this->phoneNo=phoneNo;
    }
    void displayPersonDetails(){
    cout<<"Name="<<fullname<<endl<<"phone="<<phoneNo<<endl;

    }
    };
    class Student :public Person{
        public:
        int id;
        void displayStudentDetails(){
            cout<<"Name="<<fullname<<endl<<"phone="<<phoneNo<<endl;

        }


    };
   int main()
   {
    Person per;
    per.fullname="Atiq khan";
    per.setphoneNumber("8707435104");
    per.displayPersonDetails();

    Student stu;
    stu.fullname="asad alam";
    stu.id=2345;
    stu.setphoneNumber("3456422444");
    stu.displayStudentDetails();
   }*/


   #include<bits/stdc++.h>
   using namespace std;

   class Person {

    protected:
        string phoneNumber;

    public:
        string fullName;

        void setPhoneNumber(string phoneNumber) {
            this->phoneNumber = phoneNumber;
        }
}; 

class Employee : public Person {

    private:
        float salary;

    public:
        void addBonus(float bonus) {
            this->salary = this->salary + bonus;
        }

    public:
        int id;

        void setSalary(float salary) {
            this->salary = salary;
        }

        void displayDetails() {
            cout << "Current salary: " << salary<<endl<<"ID="<<id<<"Name="<<fullName<<endl<<"phone no="<<phoneNumber;
        }
};


int main() {

    Employee employee;
    employee.id = 1;
    employee.fullName = "Aditya Sharma";
    employee.setPhoneNumber("+91-887700132");
    employee.setSalary(35000);
    employee.addBonus(4000);
    employee.displayDetails();

    return 0;
}


    