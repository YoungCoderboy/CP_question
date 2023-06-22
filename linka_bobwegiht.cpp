#include<iostream>
using namespace std;


int main(){
    int a,b;
    int flag=0;
    cin>>a>>b;
    while(true)
    {
        if(a>b)
        {
            break;
        }
        flag++;
        a=a*3,b=b*2;

    }
    cout<<flag<<endl;



return 0;
}