/*

#include<bits/stdc++.h>
using namespace std;

class Dog{
    public:
    int age;
    string color;
    string breed;
    string petname;


 void displaydetails();
  Dog(){
        cout<<"Dog details are printed"<<endl;
    }
};
void Dog::displaydetails(){
    cout<<"dog age="<<age<<endl;
    cout<<"dog color="<<color<<endl;
    cout<<"dog breed="<<breed<<endl;
    cout<<"dog petname="<<petname<<endl;
}
int main(){
    Dog do1;
    do1.age=3;
    do1.color="balck";
    do1.breed="germam sepherad";
    do1.petname="mars";
    do1.displaydetails();
}

// parametrized constructor

#include <bits/stdc++.h>
using namespace std;
class Khan
{
public:
    int id;
    string firstname;
    string lastname;

    // function declaration inside class
    string getfullname()
    {
        return firstname + " " + lastname;
    }
    void displaydetails(); // function decleration
    Khan(int, string, string); // constructor declared out side of the class
};
// parametrized constructor
Khan::Khan(int id, string firstname, string lastname)
{
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
}
void Khan::displaydetails()
{
    cout << "id=" << id << endl;
    cout << "name=" << getfullname() << endl;
}
int main()
{
    // create object of the class
    Khan at1(1, "Atiq", "khan");
    // print attributes value
    at1.displaydetails();

    Khan at2(2, "khan", "bahadur");
    at2.displaydetails();
}

#include <bits/stdc++.h>
using namespace std;
class Khan
{
public:
    int id;
    string firstname;
    string lastname;
    // parametrized constructor inside the class

    // function/class definition
    string getfullname()
    {
        return firstname + " " + lastname;
    }
    void displaydetails();
    Khan(int, string, string);
};
Khan::Khan(int id, string firstname, string lastname)
{
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
}
void Khan::displaydetails()
{
    cout << "id=" << id << endl;
    cout << "fullname=" << getfullname() << endl;
}
int main()
{

    Khan at1(1, "Atiq", "khan");
    at1.displaydetails();

    Khan at2(2, "khan", "bahadur");
    at2.displaydetails();
}

// code challenge
#include <bits/stdc++.h>
using namespace std;
class Khan
{
public:
    int id;
    string firstname;
    string lastname;
   Khan(int, string,string); // we have to declare the  parametrized constructor with same name of the class
    string getfullname()
    {
        return firstname + " " + lastname;
    }

    void displaydetails();
};
Khan::Khan(int id, string firstname, string lastname)
    {
        this->id = id;
        this->firstname = firstname;
        this->lastname = lastname;
    }
void Khan::displaydetails()
{
    cout << "id=" << id << endl;
    cout << "fullname=" << getfullname() << endl;
}
int main()
{
    Khan at1(1, "atiq", "khan");
    at1.displaydetails();

    Khan at2(34,"shafiq","khan");

    at2.displaydetails();
}

#include <bits/stdc++.h>
using namespace std;

class Khan
{
    public:
    int id;
    string firstname;
    string lastname;

    Khan(int, string, string); // The parametrized constructor must be same name as class
    string getfullname()
    {
        return firstname + " " + lastname;
    }
    void displaydetails();
};
Khan::Khan(int id, string firstname, string lastname)
{
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
}
void Khan::displaydetails()
{
    cout << "id=" << id << endl
         << "getfullname=" << getfullname();
}
int main()
{
    Khan kh(23, "arshad", "khan");
    kh.displaydetails();
}*/
 


 // By using bydefault constructor 

#include <bits/stdc++.h>
using namespace std;
class ishq
{
public:
int standrd;
string firstname;
string lastname;
string add;
string getfullname()
{
    return firstname +" "+ lastname;

}
void  disp()
{
    cout<<"class="<<standrd<<endl<<"fullname="<<getfullname()<<endl<<"address="<<add;
}
};

int main()
{
    ishq kh;
    kh.add="Ambwa jauhair sisai post diwah risia bahraich";
    kh.firstname="Arish";
    kh.lastname="khan";
    kh.standrd=10;

    kh.disp();

}