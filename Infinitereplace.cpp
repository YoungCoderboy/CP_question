#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        long long int sa=0,ta=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
            sa++;

        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='a')
            ta++;
        }


        if(t=="a")
        {
            cout<<1<<endl;
        }
        else if(ta>0)
        {
            cout<<-1<<endl;

        }
        else
        {
            cout<<fixed<<setprecision(0)<<pow(2,sa)<<endl;
        }
    }
    
    return 0;
}