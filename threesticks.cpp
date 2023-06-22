#include<iostream>
#include<climits>
#include<algorithm>

 
 
using namespace std;
 
int main()
{
        int t;
        cin>>t;
        while(t--)
        {
                int n;
                cin>>n;
                int arr[n];
                for( int i=0;i<n;i++)
                {
                        cin>>arr[i];
                        
                }
                
                sort(arr,arr+n);
                int ans=INT_MAX;
                for(int i=0;i<n-2;i++)
                {
                    int to=arr[i+2]-arr[i];
                    ans=min(ans,to);

                        
                }
                cout<<ans<<endl;
        }
}