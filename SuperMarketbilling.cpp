#include <iostream>
#include<string>
#include <fstream>
using namespace std;
class shopping
{
private:
    int pcode;
    float price;
    float disc;
    string prdname;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void remo(); // remove function
    void list();
    void reciept();
};
void shopping::menu()

{
    {
    m:
        int choice;
        string email;
        string password;
        cout << "!-------------------------------!\n";
        cout << "!                               !\n";
        cout << "!     Supermarket main menu     !\n";
        cout << "!                               !\n";
        cout << "!-------------------------------!\n";
        cout << "                                 \n";
        cout << "!------------------------!\n";
        cout << "! 1) Administrator       !\n";
        cout << "!                        !\n";
        cout << "! 2) buyer               !\n";
        cout << "!                        !\n";
        cout << "! 3) Exit                !\n";
        cout << "!------------------------!\n";
        cout << "      Please select      \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "   Please login    \n";
            cout << "  enter the eamil  \n";
            cin >> email;
            cout << "please Enter the password \n";
            cin >> password;
            if (email == "atiqullahkhan554@gmail.com" && password == "Atiqafrn786@")
            {
                administrator();
            }
            else
                
                {
                    cout << "invalid Login Details\n";
                }
            break;
        case 2:
        {
            buyer();
        }
        // case 3:
        // {
        //     exit();
        // }
        default:
        {
            cout << "Please select the from given option\n";
        }
        }
    }
    goto m;
}
void shopping ::administrator()
{
m:
    int choice;
    cout << "!----------------------!\n";
    cout << "!  administrator menu  !\n";
    cout << "!                      !\n";
    cout << "!1) Add the product    !\n";
    cout << "!                      !\n";
    cout << "!2) Modify the product !\n";
    cout << "!                      !\n";
    cout << "!3) Delete the product !\n";
    cout << "!                      !\n";
    cout << "!4) Return the main menu!\n";
    cout << "!                      !\n";
    cout << "!                      !\n";
    cout << " Please Enter your choice\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        remo();
        break;
    case 4:
        menu();
         break;
    default:
        cout << "Invalid choice \n";
    }
    goto m;
}
void shopping::buyer()
{
m:
    int choice;
    cout << "!-----------------!\n";
    cout << "!     Buyer       !\n";
    cout << "!-----------------!\n";
    cout << "!1) Buy product   !\n";
    cout << "!                 !\n";
    cout << "!2) Go back       !\n";
    cout << "Enter your choice  \n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        reciept();
        break;
    case 2:
        menu();
        default:
        cout << "Invalid choice \n";
    }
    goto m;
}
void shopping ::add()
{
m:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;
    cout << "\n Add new product ";
    cout << "\nEnter the product code";
    cin >> pcode;
    cout << "\n Name of the product";
    cin >> prdname;
    cout << "\n Price of the prduct ";
    cin >> price;
    cout << "\n Discount on the product";
    cin >> disc;
    data.open("database.txt", ios::in); // ios::in will open file in reading mode and ios::out will open file in writing mode
    if (!data)
    {
        data.open("database.text", ios::app | ios::out);
        data << " " << pcode << " " << prdname << " " << price << " " << disc << "\n";
        data.close();
    }
    else
    {
        data >> c >> n >> p >> d; // this  is how we read from file
        while (!data.eof())
        {
            if (c == pcode)
            {
                token++;
            }
            data >> c >> n >> p >> d;
        }
        data.close();

        if (token == 1)
            goto m;
        else
        {
            data.open("database.txt", ios::app | ios::out);
            data << " " << pcode << " " << prdname << " " << price << " " << disc << "\n";
            data.close();
        }
    }

    cout << "\n Record inserted !";
}
void shopping::edit()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;
    cout << "\n modify the record ";
    cout << "\n product code ";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n File does not exist";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> prdname >> price >> disc;
        while (!data.eof())
        {
            if (pkey == pcode) // pkey is the code which is entered by the administrator which he wants to edit
            {
                cout << "\n prodcut new code ";
                cin >> c;
                cout << "\n name of the product";
                cin >> n;
                cout << "\n Price";
                cout << "\n discoutn";
                cin >> d;
                data1 << " " << c << " " << n << " " << p << " " << d << "\n";
                cout << "\n Record edited";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << prdname << " " << price << " " << disc << " \n";
            }
            data >> pcode >> prdname >> price >> disc;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");
        if (token == 0)
        {
            cout << "\n The record not found sorry ";
        }
    }
}
void shopping::remo()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    cout << "\n Delete the product";
    cout << "\n Enter the product code";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\nFile does not exist";
    }
    else
    {
        data.open("database1.txt", ios::app | ios::out);
        data >> pcode >> prdname >> price >> disc;
        while (data.eof())
        {
            if (pcode == pkey)
            {
                cout << "\nProduct deleted succesfully ";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << prdname << " " << price << " " << disc << "\n";
            }

            data >> pcode >> prdname >> price >> disc;
        }
    }
    data.close();
    data1.close();
    remove("database.txt");
    rename("database1.txt", "database.txt");
    if (token == 0)
    {
        cout << "\n Record not found";
    }
}
void shopping :: list()
{
    fstream data;
    data.open("database.txt", ios::in);
    cout << "\n!------------------------------------!\n";
    cout << "ProNo\t\tName\t\tPrice\n";
    cout << "!--------------------------------------!\n";
    data >> pcode >> prdname >> price >> disc;
    while (!data.eof())
    {
        cout << pcode << "\t\t" << prdname << "\t\t"<<price<<"\n";
        data >> pcode >> prdname >> price >> disc;
    }
    data.close();
}
void shopping::reciept()
{

    fstream data;
    int arrc[100]; // array of code
    int arrq[100]; // array of quantity
    char choice;
    int c = 0;
    float amount = 0;
    float dis = 0;
    float total = 0;
    cout << "\n--------Reciept--------";
    cout<<"\n                           \n";
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\nEmpty database";
    }

    else
    {
        data.close();
        list();
        cout << "\n!----------------------------\n";
        cout << "\n                             \n";
        cout << "\n    Please place the order   \n";
        cout << "\n                             \n";
        cout << "\n-----------------------------\n";
        do
        {
            m:
            cout << "\n Enter the product code";
            cin >> arrc[c];
            cout << "\n Enter the product quantity";
            cin >> arrq[c];
            for (int i = 0; i < c; i++)
            {
                if (arrc[c] == arrc[i])
                {
                    cout << "\n Duplicate product code. Please try again";
                    goto m;
                }
            }
            c++;
            cout << "\n Do you want to buy another product if yes press y else no ";
            cin >> choice;

        } while (choice == 'y');
        cout << "\n!-------------RECIEPt---------------\n";
        cout << "\nProduct no\t Product name\t product quantity\t price\t Amount \t Amount with discount \n "; 
        for (int i = 0; i < c; i++)
        {
            data.open("database.txt", ios::in);
            data >> pcode >> prdname >> price >> disc;
            while (!data.eof())
            {
                if (pcode == arrc[i])
                {
                    amount = price * arrq[i];
                    dis = amount - (amount * dis / 100);
                    total = total + dis;
                    cout << "\n"
                         << pcode << "\t\t" << prdname << "\t\t" << arrq[i] << "\t\t" << price << "\t\t" << amount << "\t\t" << dis;
                }
                data >> pcode >> prdname >> price >> disc;
            }
        }
        data.close();
    }
    cout << "\n!---------------------------------!";
    cout << "\nTotal amount " << total;
}

int main()
{
    shopping a;
    a.menu();
}