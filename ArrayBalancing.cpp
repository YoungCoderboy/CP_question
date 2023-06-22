#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n],b[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(long long int i=0;i<n-1;i++)
        {
            long long int tem1=b[i+1]-a[i];
            if(tem1<0)
            {
                tem1=-tem1;
            }

            long long int tem2=a[i+1]-a[i];
            if(tem2<0)
            {
                tem2=-tem2;
            }

            long long int tem3=b[i+1]-b[i];
            if(tem3<0)
            {
                tem3=-tem3;
            }

            long long int tem4=a[i+1]-b[i];
            if(tem4<0)
            {
                tem4=-tem4;
            }
             
            if((tem2+tem3)>(tem1+tem4))
            {
                long long int tem=a[i+1];
                a[i+1]=b[i+1];
                b[i+1]=tem;

            }
            
        }
        long long int sum1=0,sum2=0;

        for(long long int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            sum1+=a[i]-a[i+1];
            else
            sum1+=a[i+1]-a[i];

            if(b[i]>b[i+1])
            sum2+=b[i]-b[i+1];
            else
            sum2+=b[i+1]-b[i];
        }
        cout<<sum1+sum2<<endl;

    }

}