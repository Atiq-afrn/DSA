/*

#include<bits/stdc++.h>
using namespace std;
class Atiq{
    public: 
    int id;
    string firstname;
    string lastname;
    
    // defining function/method inside class
    string getfullname(){
        return firstname + " " + lastname;
    }
};
int main(){
    Atiq at1;// creating object of the class
    at1.id=40;
    at1.firstname="atiq";
    at1.lastname="khan";
//    string fullname1= at1.getfullname();
   cout<<at1.getfullname()<<endl<<"id="<<at1.id<<endl;


   //creating  second object of class
   Atiq at2;
   at2.id=50;
   at2.firstname="afrn";
   at2.lastname="khan";
   cout<<at2.getfullname()
   <<endl; 
} 

// defining the function outsideclass

#include<bits/stdc++.h>
using namespace std;
class Atiq{
    public:
    int id; 
    string firstname;
    string lastname;
    stirng getfullname(){
     return firstname +" "+ lastname;
    }

    void displaydetails();

};
void Atiq :: displaydetails(){
    cout<<"ID="id<<endl<<"name="<<getfullname()<<endl;
}
int main()
{
    // creating the object of the class 
    Atiq at1;
    at1.id=40;
    at1.firstname="atiq";
    at1.lastname="khan";
    at1.getfullname();
    at1.displaydetails();
}*/


#include<bits/stdc++.h>
using namespace std;
class Dog{
public:
int age;
string color;
string breed;
string name;
  void dogsdetails();
  Dog(){   // constructor inside the class
    cout<<" dog details are printed "<<endl;
  }
};
void Dog::dogsdetails(){
cout<<"dog age="<<age<<endl<<"Dog color="<<color<<endl<<"Dog bread="<<breed<<endl<<"Dog name="<<name<<endl;
}
int main()
{
    Dog do1;
    do1.age=4;
    do1.color="black & white";
    do1.breed="sepherad";
    do1.name="moti";
    do1.dogsdetails();

    Dog do2;
    do2.age=6;
    do2.color="white";
    do2.breed="german cephered";
    do2.name="moti";
    do2.dogsdetails();

}