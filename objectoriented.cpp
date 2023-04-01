#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    bool gender;
    void displaydetails()
    {
        cout << "name = " << name << endl;
        cout << " age = " << age << endl;
        cout << "gender = " << gender << endl;
    }
};
int main()
{

    Student arr[4];
    for (int i = 0; i <= 3; i++)
    {
        cout << "name = " ;
        cin >> arr[i].name;
        cout << "age = " ;
        cin >> arr[i].age;
        cout << "gender = ";
        cin >> arr[i].gender;
    }
    for (int i = 0; i <= 3; i++)
    {
        arr[i].displaydetails();
    }
}