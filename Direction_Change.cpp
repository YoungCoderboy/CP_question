#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long int n, m;
        cin >> n >> m;
        long long int tem = n - m;
        long long int min = m;
        if (n < m)
        {
            min = n;
            tem = m - n;
        }
        if (n == 1 && m == 1)
        {
            cout << 0 << endl;
        }
        else if ((n == 1 && m > 2) || (m == 1 && n > 2))
        {

            cout << -1 << endl;
        }
        else if (n == m)
        {
            cout << n + m - 2 << endl;
        }
        else
        {
            
            if (tem % 2 != 0)
            {
                cout << 2 * (tem + min) - 3 << endl;//tem+min=maxium element
                
            }
            else
            {
                cout << 2 * (tem + min) - 2 << endl;
            }
        }
    }
}