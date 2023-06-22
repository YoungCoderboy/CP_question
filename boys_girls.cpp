#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    short a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<s.length();i++)
    {
        a[(int)s.at(i)-97]=1;
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]==1)
        {
            flag++;
        }
    }
    if(flag%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}