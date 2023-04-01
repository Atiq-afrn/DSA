/*
#include<iostream>
using namespace std; 
int main()
{

    int arr[50],size,posi,element;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array element "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;

    }
    cout<<"Enter the element to inserted "<<endl;
    cin>>element;
    cout<<"Enter the position where element to be added "<<endl;
    cin>>posi;
    while((posi>size)||(posi<0))
    {
        cout<<"Enter the valid index number "<<posi-1<<endl;
        cin>>posi;
    }
    for(int i=0;i<size;i++)
    {
        if(posi==i)
        {
            arr[i]=element;
        }
    }
    cout<<"The array element"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[50],posi,element,size;
    cout<<"enter the array size"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array Element "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"Enter the element the to be inserted "<<endl;
    cin>>element;
    cout<<"Enter enter the position where it inserted"<<endl;
    cin>>posi;
    while((posi>size)||(posi<0))
    {
        cout<<"Enter the valid index"<<endl;
        cin>>posi;
    }
    for(int i=0;i<size;i++)
    {
        if(posi==i)
        {
            arr[i]=element;
        }
    }
    cout<<"The inserted element"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
