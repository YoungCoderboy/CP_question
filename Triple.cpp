#include<iostream>
#include<map>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        
        for(int i=0;i<n;i++)
        {
            b[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]-1]++;

        }
        int flag=-10;
        for(int i=0;i<n;i++)
        {
            if(b[i]>=3)
            {
                flag=i+1;

            }
            
        }
        if(flag<0)
        {
            cout<<-1<<endl;
        }
        else
        {
        cout<<flag<<endl;

        }
        

    }
    


return 0;
}
// 7
// 1
// 1
// 3
// 2 2 2
// 7
// 2 2 3 3 4 2 2
// 8
// 1 4 3 4 3 2 4 1
// 9
// 1 1 1 2 2 2 3 3 3
// 5
// 1 5 2 4 3
// 4
// 4 4 4 4
