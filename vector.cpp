/*

#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    //  c++ <vector> header vector are similar to arrays but it can change its size'
    // by inserting the new element

    // here we have to define what type of data we gonna use
    vector <string> name; /// add the element at the end
    name.push_back("atiq khan");
    name.push_back("asad alam");
    name.push_back("saad");
    name.push_back("sameer khan");


    //access the element

    cout<<"Data at index[0]="<<name[0]<<endl;


    // how to find the number of element in the vector;
    cout<<"number of element in the vector="<<name.size()<<endl;


   // how to edit the element from the vector
   name[2]="shafiqullah khan";
   cout<<name[2];


   // how to delete the the element from the vector

   name.pop_back();  // its will remove the last member of the vector
//  sameer khan will be removed

}*/

#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v) for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
cout << endl;
int main()
{
    vector<int> vec1;
    int element;
    for (int i = 0; i < 4; i++)
    {
        cout << "enter the element to add in this vector ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vector);
}