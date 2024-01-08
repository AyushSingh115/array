#include<iostream>
using namespace std;
int main()
{
    char n;
    char arr[1000];
    cout<<"enter the size the array";
    cin>>n;
    for(char i='a';i<n;i++)
    {
        cout<<" enter the size";
        cin>>arr[i];
    }
    for(char i=n-2;i>='a';i--)
    {
        bool swapped=0;
        for(char j='a';j<=i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if (swapped==0)
            break;
    }
    for(char i='a';i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
