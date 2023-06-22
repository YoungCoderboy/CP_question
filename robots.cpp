#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char ch;
                cin >> ch;
                if (ch == 'R' && arr[i] == 0)
                {
                    arr[i] = j + 1;
                }
            }
        }
        int no_nonzero = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
                no_nonzero++;
        }
        int arr2[no_nonzero];
        int j = 0;
        for (int i = 0; i < n; i++)
        {

            if (arr[i] != 0)
            {
                arr2[j] = arr[i];

                j++;
            }
        }

        int flag = 0;
        if (arr2[0] != 1)
        {
            for (int i = 0; i < no_nonzero; i++)
            {
                
                if (arr2[0] <= arr2[i])
                    flag++;
            }
            if (flag == no_nonzero)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}