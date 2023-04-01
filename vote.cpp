#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age ";
    cin>>age;
    if(age>=18)
    goto vote;
    else
    goto notvote;
    vote:
    cout<<"you are eligiable for vote";
return 0;


    
    notvote:
    cout<<"your are not eligiable for vote";
    return 0;
}