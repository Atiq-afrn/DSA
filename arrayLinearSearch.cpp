/*
#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
           cout<<"Result is matched "<<arr[i]<<endl;
        }
        else{
            cout<<"result is not matched"<<endl;

        }
    }
    
} 
int main()
{
    int arr[90];
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    cout<<"Enter the array "<<endl;
    for(int i=0;i<n;i++) 
    {
     cin>>arr[i];
    }
    cout<<"The array element "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" "<<endl;
  }
  int key;
  cout<<"enter the key ";
  cin>>key;
  linearSearch(arr,n,key);

    

}
*/
#include<iostream>
using namespace std;
linearSearch(int arr[],int n,int key)
{
  for(int i=0;i<=n;i++)
  {
    if(arr[i]==key)
    {
      cout<<"result match ="<<i;
    }
    else{
      return 
    }
  }
}
int main()
{
  int arr[30];
  int n;
  cout<<"Enter the array size"<<endl;
  cin>>n;
  cout<<"Enter the array"<<endl;
  for(int i=0;i<=n;i++)
  {
    cin>>arr[i];
  }
  cout<<"The array element "<<endl;
  for(int i=0;i<=n;i++)
  {
    cout<<arr[i]<<endl;
  }
  int key;
  cout<<"Enter the key to search "<<endl;
  cin>>key;
  linearSearch(arr,n,key);

  
}