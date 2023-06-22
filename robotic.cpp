#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
             for(int j=m-1;j>=0;j--)
             {
                 char c;
                 cin>>c;
                 if(c=='R')
                 {
                     arr[i]=j+1;
                 }
                
             }
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }


return 0;
}