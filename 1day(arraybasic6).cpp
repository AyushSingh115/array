#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int min=arr[0];
    for(int i=0;i<5;i++)
    {
        cout<<"enter the elements";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"minimum element in array:-"<<" ";
    cout<<min;
}