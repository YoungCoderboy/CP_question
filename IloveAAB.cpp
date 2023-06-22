#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    while(n--)
    {
        
        string s;
        
        cin>>s;
        bool ans=(s[s.length()-1]=='B');
        int flag=0;
    
        for(int i=0;i<(s.length());i++)
        {
            if(s[i]=='A')
            flag++;
            else
            flag--;
            if(flag<0)
            ans=false;
            
        }
        if(ans)
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