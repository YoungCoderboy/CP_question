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
        int arr[n];
        bool test2 = false;
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                test2 = true;
                a++;
            }
        }
        int arr2[101]={0};
        for (int i = 0; i < n; i++)
        {
            arr2[arr[i]]++;
        }
        bool test1 = false;
        for (int i = 0; i < 101; i++)
        {

            if (arr2[i] > 1)
            {
                test1 = true;
                break;
            }
        }
        if (test2)
            cout<< n - a << endl;
        else if (test1)
            cout << n  << endl;
        else
            cout << n + 1 << endl;
    }

    return 0;
}