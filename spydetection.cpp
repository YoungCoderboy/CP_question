#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count;
    int arr[n];
    
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i-1]==arr[i])
        {
            count=arr[i];
        }
    }

}