#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int flag=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
              flag++;
              a[i]=abs(a[i]);
        }
        for(int i=0;i<flag;i++)
        {
            a[i]*=-1;
        }
        bool ans=true;
        for(int i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
            ans=false;
        }
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}