#include<iostream>
using namespace std;
struct khan
{
    int marks; // int 4bytes
    float khan;  // float 4 bytes
    double ati;  // double 8bytes
};
union khan2
{
    int marks;
    float khan;
    double ati;
};

int main()
{
    system("cls");
    struct khan k;
    union khan2 b;
    cout<<"structure size="<<sizeof(k)<<endl; 
    cout<<"union size="<<sizeof(b);
}