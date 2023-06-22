#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1&&s[0]!='W')
        {
            cout<<"NO"<<endl;
        }
        else if(n==2)
        {
            if(((s[0]=='W'&&s[1]=='W')||(s[0]=='R'&&s[1]=='B')||(s[0]=='B'&&s[1]=='R')))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(s[i]!='W'&&s[i+1]!='W')
                {
                    s[i]='W';
                    s[i+1]='W';

                }

            }
            int flag=0;
            for (int i = 0; i < n; i++)
            {
                if(s[i]!='W')
                {
                    cout<<"NO"<<endl;
                    flag=-10;
                }
                
            }
            if(flag==0)
            {
                cout<<"YES"<<endl;
            }
            
        }
        
    }


return 0;
}