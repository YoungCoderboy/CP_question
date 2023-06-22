#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int m = n;
        int i = 0;
        vector<int> vec;
        int ans = 0;
        while (i < n)
        {
            int flag = 0;
            int j=i;
            while (s[i] == s[j] && i < n)
            {
                flag++, j++;
            }
            vec.push_back(flag);
            i = j;
        }
        for (int i = 0; i < vec.size() - 1; i++)
        {
            if (vec[i] % 2 == 0)
                continue;
            else
            {
                vec[i + 1]-=1;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}