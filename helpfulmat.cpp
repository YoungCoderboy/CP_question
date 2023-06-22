#include<iostream>
using namespace std;


int main(){

string s;
cin>>s;
for(int i=0;i<s.length()-1;i+=2)
{
    for(int j=i;j<s.length();j+=2)
    {
        if(s[i]>s[j])
        {
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
}
cout<<s<<endl;


return 0;
}