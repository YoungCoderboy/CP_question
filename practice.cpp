#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
         sort(v.begin(),v.end());

         if(v[n-1]%2!=0)
         {
            v[n-1]=v[n-1]+v[n-1]%10;
         }
         bool flag=true;
         
         for(int i=0;i<n-2;i++)
         {
            while(v[i]<v[n-1])
            {
                v[i]=v[i]+v[i]%10;
            }
            if(v[i]==v[n-1])
            {
                continue;
            }else
            {
                flag=false;
                break;
            }



         }


     if(flag)
     {
        cout<<"yes"<<endl;
     }else
     {
        cout<<"no"<<endl;
     }
















    }
}