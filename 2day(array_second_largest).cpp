#include<iostream>
using namespace std;
int main()
{
    int arr[6];
    int max_ele=-1;
    cout<<"enter the element";
    for(int i=0;i<6;i++)
    {
      cin>>arr[i];
    }
    for(int i=0;i<6;i++)
    {
        if(arr[i]>max_ele)
        {
            max_ele=arr[i];
        }
    }
cout<<"largest number"<<" "<<max_ele<<endl;
    int sec_max_ele=-1;
    for(int i=0;i<6;i++)
    {
       if(arr[i]!=max_ele & arr[i]>sec_max_ele)
       {
           sec_max_ele=arr[i];
       }
    }
    cout<<" second larest number"<<" "<<sec_max_ele;
}