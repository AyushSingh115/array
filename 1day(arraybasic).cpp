#include<iostream>
using namespace std;
 int main()
 {
     int arr[1000];
     for(int i=0;i<6;i++)
     {
         cout<<"enter the number";
         cin>>arr[i];
     }
     for(int i=0;i<6;i++)
     {
         cout<<" "<<"elements of array:-";
         cout<<arr[i]<<endl;
     }
 }