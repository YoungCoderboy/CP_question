#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        
        bool ans1=true,ans2=true;
        for(int i=0;i<n;i++)
        {
            
            if((i+1)%2==0)
            {
                
                if(a[i]%2!=a[1]%2)
                {
                    ans1=false;
                }

            }
            else
            {
                if(a[i]%2!=a[0]%2)
                {
                    ans2=false;
                }

            }

        }
        // cout<<ans1<<" "<<ans2<<endl;
        if(ans1&ans2)
        {
            cout<<"YES"<<endl;
        }
        else
        {

            cout<<"NO"<<endl;
        }
    }


return 0;
}