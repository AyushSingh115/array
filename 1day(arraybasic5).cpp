#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int max=arr[0];
    for(int i=0;i<5;i++)
    {
       cout<<" enter the elements";
       cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max;
}