#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int flag=0;
        if(a>=x)
        {
            flag=2;
        }
        else
        {
            x=x-a;
        }
        
        if(b>=y)
        {
            flag+=3;
        }
        else
        {
            y=y-b;
        }

        if(flag==5)
        {
            cout<<"YES"<<endl;
        }
        else if(flag==2)
        {
            if(c>=y)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(flag==3)
        {
            if(c>=x)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(c>=(x+y))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }


return 0;
}