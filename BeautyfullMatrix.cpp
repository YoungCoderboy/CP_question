#include <iostream>
using namespace std;

int main()
{
    int x,y,flag=0;
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x=i,y=j;
                break;
            }
        }
    }
    while(x!=2)
    {
        flag++;
        x>2?x--:x++;
    }    
    while(y!=2)
    {
        flag++;
        y>2?y--:y++;
        
    }
    cout<<flag<<endl;
    
    
    return 0;
}
