#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    int sum=0;
    cout<<"enter the element";
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cout<<"enter the item";
        cin>>arr[i];
    }
    int ans=n*(n-1)/2;
    for(int i=0;i<n-1;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"missing number"<<ans-sum;
}