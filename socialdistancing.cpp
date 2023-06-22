#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,m;
        cin>>n>>m;//n is no of people and m is no of chairs
        long long int a[n];
        long long int maxele=INT_MIN;
        long long int minele=INT_MAX;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            long long int tem=a[i];
            maxele= max(tem,maxele);
            minele=min(tem,minele);
            sum+=a[i];

        }
        long long int exp=maxele+sum-minele+n;
        if(exp<=m)
        {
            cout<<"Yes"<<endl;

        }
        else
        {
            cout<<"No"<<endl;

        }

    }
    


return 0;
}