#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int diff = a - b;
        if (diff < 0)
            diff *= -1;

        int ans = 0;
        if (diff == 0)
            cout << ans << endl;
        else if (diff > 10)
        {
            if(diff%10!=0)
            cout << diff / 10 + ans +1<< endl;
            else
            cout << diff / 10 + ans << endl;
        }
        else
        cout<<ans+1<<endl;
    }

    return 0;
}