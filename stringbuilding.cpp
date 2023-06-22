#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
         string s;
         cin>>s;
         int a=0,b=0;
         int flag=1;
         int n=s.length();
         for(int i=0;i<s.length();i++)
         {
            if((i==0||s[i]!=s[i-1])&&(i==n-1||s[i]!=s[i+1]))
            flag=0;
             
         }
         if(flag==0)
         {
             cout<<"NO"<<endl;
         }
         else
         {
             cout<<"YES"<<endl;
         }
    }
    


return 0;
}