#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    float sum=0;
    int avg;
    for(int i=0;i<6;i++)
    {
        cout<<"enter the number";
        cin>>arr[i];
    }
    for(int i=0;i<6;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum/6;
}