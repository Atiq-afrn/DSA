/*

#include <bits/stdc++.h>
using namespace std;
int Sum(int n)
{ // sum of n number given by user
    if (n == 0)
    {
        return 0;
    }
    int preSum = Sum(n - 1);
    return n + preSum;
}
int main()
{
    int a;
    cout << "enter the number" << endl;
    cin >> a;
    cout << Sum(a);
}

// calculate  n raised to power of p
#include <bits/stdc++.h>
using namespace std;
int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prepower = power(n, p - 1);
    return n * prepower;
}
int main()
{
    int n, p;
    cout << "enter the number to find the exponent" << endl;
    cin >> n >> p;
    cout << power(n, p);
}
*/
#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int prefact = factorial (n - 1);
    return n * prefact;
}
int main()
{
    int a;
    cout << "Enter the number to find out factorial" << endl;
    cin >> a;
    cout << factorial(a);
}
