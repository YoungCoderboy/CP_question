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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ans=true;

        int flag = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            while (a[i] >=a[i + 1] &&a[i]>0)
            {
                a[i] /= 2;
                flag++;
            }
            if(a[i]==a[i+1])
            ans=false;
        }
        if(ans)
        cout << flag << endl;
        else
        cout<<-1<<endl;
    }

    return 0;
}