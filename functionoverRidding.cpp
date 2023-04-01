#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
   virtual void sound()
    {
        cout << "Animal class: making sound" << endl;
    }
   virtual void sleep()
    {
        cout << "Animal class: sleeping" << endl;
    }
};
class Dog : public Animal
{
public:
   virtual void sound()
    {
        cout << "Dog class: bow-bow" << endl;
    }
   virtual void Dogsleep()
    {
        cout << "Dog sleep:sleeping" << endl;
    }
};

int main()
{
    Animal *animal = new Dog(); // animal--> Dog object
    animal->sleep();
    animal->sound();

    Dog dog1;
    dog1.sound();
    dog1.sleep();
}