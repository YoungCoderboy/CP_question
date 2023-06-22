#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    {
        int a[26] = {0};
        string s;
        cin >> s;
        for(int i=0;i<s.length();i++)
        {
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]!=0)
            {
                cout<<;
            }
        }
    }

    return 0;
}