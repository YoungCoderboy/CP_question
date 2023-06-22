#include<iostream>
using namespace std;


int main(){
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int ans1=0,ans2=0;
    
    if(n%a!=0)
    {
        ans1+=(n)/(a)+1;
    }
    else 
    {
        ans1+=n/a;
    }
    if(m%a!=0)
    {
        ans2+=m/a+1;
    }
    else 
    {
        ans2+=m/a;
    }
    cout<<ans1*ans2<<endl;


return 0;
}