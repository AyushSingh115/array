#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int x=arr[5];
    for(int i=0;i<6;i++)
    {
        if(arr[i]==x)
        {
            cout<<" "<<x;
        }
    }
}