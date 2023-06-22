#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, a;
        cin >> s >> a;
        bool ans = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == a[0])
            {

                if ((i + 1) % 2 == 0)
                    ans = false;
                else if (s.length() % 2 != 0)
                {
                    ans = true;
                    break;
                }

                else
                    ans = false;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
        cout<<"NO"<<endl;
        
    }

    return 0;
}