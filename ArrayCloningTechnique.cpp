#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<long long ,long long> um;

        for(int i=0;i<n;i++)
        {
            long long tem;
            cin>>tem;
            um[tem]++;

        }
        map<long long ,long long> ::iterator it;
        
        long long int maxfrq=INT_MIN;
        for(it=um.begin();it!=um.end();it++)
        {
           
            maxfrq=max(maxfrq,(*it).second);

        }
        int flag=0;
        if(maxfrq==n)
        {
            flag=0;
        }
        else
        {
             n=n-maxfrq;
            while(n!=0)
            {
                if(n<maxfrq)
                {
                    flag+=n+1;
                    break;

                }
                else
                {
                    n=n-maxfrq;
                    flag+=maxfrq;
                    maxfrq*=2;
                }
                flag++;
            }
        }
           
       cout<<flag<<endl;
        

    }


return 0;
}