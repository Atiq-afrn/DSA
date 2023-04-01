/*
Bubble sort 
Repetedly swap two adjecent elements if they are in wrong order 
to get sorted array  if we are having n elements then n-1 iteration should be performed  
/*
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
 int counter=1;
 //while(counter<n-1)
for(counter=0;counter<n;counter++)
 {
    for(int i=1;i<n-counter;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
   // counter++;
 }
 cout<<"The sorted array "<<endl;
 for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }
}
*=/
// bubble sort using for loop
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the size of the array "<<endl;
   cin>>n;
   int arr[60];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];

   }
 for(int i=0;i<n;i++)
 {
   for(int i=0;i<n-1;i++)
   {
      if(arr[i]>arr[i+1])
      {
         int temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
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
   int arr[50];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];

   }
   int i=0;
   while(i<n-1)
   {
      for(int i=0;i<n-1;i++)
      {
         if(arr[i]>arr[i+1])
         {
         int temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
         }
      }
      i++;
   }
   cout<<"The sorted array"<<endl;
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }

}