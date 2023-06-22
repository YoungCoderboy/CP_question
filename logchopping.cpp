#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {

int n;
cin>>n;
int a[n];
int sum=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    sum+=a[i];
}
if((sum+n)%2==0)
{
    cout<<"maomao90"<<endl;
}
else
{

    cout<<"errorgorn"<<endl;
}
    }



return 0;
}