#include<iostream>
using namespace std;
 int main()
 {
     int arr[1000];
     int sum=0;
     for(int i=0;i<6;i++)
     {
         cout<<"enter the elements";
         cin>>arr[i];
     }
     for(int i=0;i<6;i++)
     {
         sum=sum+arr[i];

     }
     cout<<sum;

 }
