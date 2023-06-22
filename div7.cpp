#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int rem = n % 7;
        int q1 = n / 10 ;
        int  r = 7 - rem + n;
        int  k = n - rem;
        int q2 = r / 10;
        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else if (q1 == q2)
        {
            cout << 7 - rem + n << endl;
        }
        else
        {
            cout << k << endl;
        }
    }

    return 0;
}