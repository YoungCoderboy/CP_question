#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<(t-1);i++)
        {
            if(s[i]=='0' && s[i+1]=='0')
            {
                flag+=2;
            }
            else if(s[i]=='1'&&s[i+1]=='0'&& i!=0)
            {
                if(s[i-1]!='1')
                flag++;
            }
        }
        cout<<flag<<endl;
    }


return 0;
}