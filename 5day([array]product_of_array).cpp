#include<iostream>
using namespace std;
int main()
{
    int prod=1;
    int n;
    int arr[1000];
    cout<<"enter the size of array";
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        prod=prod*arr[i];
    }
    cout<<prod<<" ";
}