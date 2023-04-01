/*

#include<iostream>
using namespace std;
int main()
{
    int a,b,max;
    cout<<"enter the number"<<endl;
    cin>>a>>b;
    max=(a>b)?a:b;
    cout<<"The greater value is = "<<max;
}

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i+=2)
    {
        cout << i << endl;
    }
}


// print the series 1,2,4,7,...
#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    for (int i = 0; i <= 6; i++)
    {
        num = num + i;
        cout << num << endl;
    }
}

// find out armstrong number between 1 to n;
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int limit=0; , last_digit = 0;
    cout << "Enter the range to find armstrong number" << endl;
    cin >> limit;

    for (int num = 1; num <= limit; num++)
    {
        int temp = num;
        double sum = 0;
        while (temp > 0)
        {
            last_digit = temp % 10;
            sum += pow(last_digit, 3);
            temp = temp / 10;
        }

        if (num == sum)
            cout << "Armstrong number=" << sum << endl;
    }
}

#include <iostream>
using namespace std;
int main()
{
    int limit; //last_digit = 0;
    cout << "Enter the range to find armstrong number" << endl;
    cin >> limit;
    for (int num = 1; num <= limit; num++)
    {
        int temp = num;
        int sum = 0;
        while (temp > 0)
        {
            sum = sum + (temp % 10) * (temp % 10) * (temp % 10);
            temp = temp / 10;
        }
        if (num == sum)
        {
            cout << "Armatrog number = " << sum << endl;
        }
    }
}

#include <iostream>
using namespace std;
int main()
{

    int limit;
    cout << "Enter the range to find armstrong number" << endl;
    cin >> limit;
    for (int num = 1; num <= limit; num++)
    {
        int temp = num;
        int sum = 0;
        while (temp > 0)
        {
            sum = sum + (temp % 10) * (temp % 10) * (temp % 10);
            temp = temp / 10;
        }
        {
            if (num == sum)
                cout << "Armstrong number=" << sum << endl;
        }
    }
}


#include <iostream>
using namespace std;
int main()
{
    int rang;
    cout << "Enter the range to find arsmtrong" << endl;
    cin >> rang;
    for (int num = 1; num <= rang; num++)
    {
        int temp = num;
        int arm = 0;
        while (temp > 0)
        {
            arm = arm + (temp % 10) * (temp % 10) * (temp % 10);
            temp = temp / 10;
        }
        if (arm == num)
        {
            cout << "The armstrong number =" << arm << endl;
        }
    }
}
*/

#include<iostream>
using namespace std;
int main()

{
    int arr[][];
    int i,j;
    cout<<"Enter the"
}