/*
  #include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"  * ";
        }
        cout<<"\n";
    }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
for(int i=1;i<=5;i++)
{

    for(int j=5;j>=i;j--)
    {
        cout<<"* ";
    }
    cout<<"\n";
}
}

#include <bits/stdc++.h>
using namespace std;
int main()

{
  for(int i=1;i<=5;i++)
  {
    for(int j=5;j>=i;j--)
    {
        cout<<" *";
    }
    cout<<"\n";

  }
}



#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<" * ";
        }
        cout<<
    }
}

#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    for(int i=3;i<=30;i+=3)
    {
        cout<<i<<" ";
    }
}


// to print the ranctangle of star
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}


// To print the holow ractangle

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the row and coloumn" << endl;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row)
            {
                cout << " * ";
            }
            else if( j==1  || j == col)
            {
                cout<<" * ";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}

//  half pyramid 
#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the star"<<endl;
    cin>>row;
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
*/

// half pyramid after 180 rotation
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the star"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-1)
            {
                cout<<" ";
            }
            else{
                cout<<" * ";
            }
        }
        cout<<endl;
    }
}