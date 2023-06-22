#include<iostream>
using namespace std;


int main(){
    string s;
    cin>>s;
    string act="hello";
    int z=0;
    int flag=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==act[z])
        {
            flag++;
            z++;
        }

    }
    if(flag==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


return 0;
}