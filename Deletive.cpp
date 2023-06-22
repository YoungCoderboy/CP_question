#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    string t;
    cin >> n ;
    while (n--)
    {
     cin>>s >> t;

        int a[26], ind[t.length()];
        
        int flag = 0;
        for (int i = (t.length()-1); i >=0; i--)
        {
            for (int k = (s.length() - 1); k >= 0; k--)
            {
                if (s[k] == t[i])
                {
                    ind[t.length()-i-1] = k;
                    s[k] = '*';
                    //cout<<ind[t.length()-i-1]<<"      "<< s<<"     "<<t.length()-i-1<<endl;
                    flag++;
                    break;
                    
                }
                // else if (s[k] == t[i] && ind[i - 1] > ind[i])
                // {
                //     ind[i] = k;
                //     s[k] = '_';
                //     flag++;
                // }
                // else
                // {
                //     cout << "No"
                //          << "\n";
                //     break;
                // }
            }
        }
        int count=0;
        for (int i = 0; i < (t.length()-1); i++)
        {
            if(ind[i]>ind[i+1])
            count++;
        }
        
        // cout<<flag<<" "<<count<<endl;
        if(flag==t.length()&&count==(t.length()-1))
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