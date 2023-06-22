#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int k,x;
        int n;
        cin>>n;
        if(n%3==0)
        {
            k=2;
            x=n/3;
        }
        else if(n%7==0)
        {
            k=3;
            x=n/7;
        }
        else if(n%2==0)
        {
            int tem=n;
            x=1;
            while(tem%2!=0)
            {
                tem=tem/2;
                x++;


            }
            
            k=log2(tem+1);
        }
        if(x*(pow(2,k)-1)==n);
        cout<<x<<endl;

    }

return 0;
}