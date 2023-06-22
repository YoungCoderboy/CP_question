#include<iostream>
using namespace std;


int main(){
    int n;
    string s;
    cin>>n>>s;
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            flag++;
        }
    }
    cout<<flag<<endl;


return 0;
}