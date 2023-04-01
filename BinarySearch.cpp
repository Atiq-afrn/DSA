/*
#include<iostream>
using namespace std;
BinarySearch(int arr[],int n,int key)
{
    int s=0, e=n;
    while(s<=n)
    {
     int mid=(s+e/)2;
    }  
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
       e=mid-1;

    }
    else if(arr[mid]<key)
    {
        s=mid+1;
    }
    return -1;
}
int main()
{
   int arr[52];
   int n;
   cout<<"Enter the size of array "<<endl;
   cin>>n;
   for(int i=0;i<n;i++)
   {
     cin>>arr[i]
   } 
   cout<<"The array element "<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" "<<endl;

   }
   int key;
   cout<<"Enter the key "<<endl;
   cin>>key;
}
*/
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int s=0,e=n,mid;
    
    while(s<=e)
    {
         mid=(s+e)/2;
    
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        e=mid-1;
    }
    else if(arr[mid]<key)
    {
        s=mid+1;
    }
    } 
    
}
int main()
{
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int arr[90];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to search "<<endl;
    cin>>key;
    cout<<BinarySearch(arr,n,key);
}