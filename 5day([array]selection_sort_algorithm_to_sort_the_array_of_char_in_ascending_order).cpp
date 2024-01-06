#include<iostream>
using namespace std;
int main()
{
    char n;
    char arr[1000];
    cout<<"enter the size of array";
    cin>>n;
    for(char i='a';i<n;i++)
    {
        cout<<"enter the item of array";
        cin>>arr[i];
    }
    for(char i='a';i<n-1;i++)
    {
        char index=i;
        for(char j=i+1;j<n;j++ )
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    for(char i='a';i<n;i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
}