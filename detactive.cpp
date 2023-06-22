#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int no0=0;
        int x=0,y=0;
        int nomar=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            no0++;
            if(s[i]=='?')
            nomar++;

        }
        if(s.length()==1)
        {
            cout<<1<<endl;
        }
        else if(nomar==s.length())
        {
            cout<<nomar<<endl;

        }
        else if(no0==0)
        {
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='1')
                x=i;
            }
            cout<<s.length()-x<<endl;
        }
        else
        {
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='0')
                {
                    y=i;
                    break;
                }


            }
            for(int i=y;i>=0;i--)
            {
                if(s[i]=='1')
                {
                    x=i;
                    break;
                }
            }
            cout<<y-x+1<<endl;
        }
    }


return 0;
}