#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){

    string s,ans="";
    cin>>s;
    

    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='y'&&s[i]!='Y')
        {
            ans+='.';
            ans+= tolower(s[i]);
            
        }
        
        
    }
    cout<<ans<<endl;


return 0;
}