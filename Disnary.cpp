#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        // int pos=(25*(charpos-1)+1)+cha index
        if(s[0]<s[1])
        cout<<(25*(s[0]-'a')+int(s[1]-'a'))<<endl;
        else
        cout<<(25*(s[0]-'a')+int(s[1]-'a')+1)<<endl;
    }

return 0;
}