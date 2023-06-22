#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(sum<0)
        {
            flag++;
            sum=0;
        }

    }
    cout<<flag<<endl;


return 0;
}