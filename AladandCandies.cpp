#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int minium=INT_MAX,maxium=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        sort(a,a+n);
        maxium=a[n-1];
        minium=a[n-2];
        if(n==1&&(a[0]!=1))
        {
            cout<<"NO"<<endl;
        }
        else if((maxium-minium)>=2)
        {

            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;

        }
        // cout<<maxium<<" "<<minium<<endl;

        
        
    }


return 0;
}