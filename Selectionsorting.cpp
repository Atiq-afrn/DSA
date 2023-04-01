/* Slection sort
Find the minimum element in the unsorted array
and swap it with element with begning

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[50];
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array element "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"The sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }

        }
    }
    cout<<"The sorted array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}