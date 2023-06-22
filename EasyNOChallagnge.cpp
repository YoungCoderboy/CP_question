#include<iostream>
using namespace std;


int main(){
    int a,b,c;
    int flag=0;
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                for(int x=1;x<=(i*j*k);x++)
                {
                    if((i*j*k)%x==0)
                    {
                        flag++;
                        flag=flag%1073741824; 
                    }
                }
            }
        }
    }
    cout<<flag<<endl;


return 0;
}