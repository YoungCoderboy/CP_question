#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        int a[n];//why it is not working

        
        for (int i = 0; i < n; i++)
        {
            
            cin>>a[i];
        }
        int i=0,j=n-1;
        int w1=0,w2=0;
        int ans=0;
        int tem=0;
        // w1+=a[i],w2+=a[j];
        // int em=n;
        while(n--)
        {
            
            
            if(w1>w2)
            {
                tem++;
                w2+=a[j];
                j--;
            }
            else
            {
                tem++;
                w1+=a[i];
                i++;
            }
          
            
            if((w2==w1))
            {
                // if(w2!=0)
                ans=tem;
            }

        }
        cout<<ans<<endl;
        
    }


return 0;
}