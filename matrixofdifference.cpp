#include <bits/stdc++.h>

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <iostream>

using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define f(x, y, z) for (int i = x; i < y; i += z)
#define E "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 != 0)
    {
        int x = 1, y = n * n;
        bool dir = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dir)
                {
                    cout << x << " ";
                    dir = false;
                    x++;
                }
                else
                {
                    dir = true;
                    cout << y << " ";
                    y--;
                }
            }
            cout << endl;
        }
    }
    else
    {
        int x = 1, y = n * n;
        bool odd = true;
        for (int i = 0; i < n; i++)
        {
            bool dir = true;

            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {

                    if (dir)
                    {
                        cout << x << " ";
                        dir = false;
                        x++;
                    }
                    else
                    {
                        dir = true;
                        cout << y << " ";
                        y--;
                    }
                }
            }
            else
            {
                vector<int> stor;
                for (int j = 0; j < n; j++)
                {
                    if (dir)
                    {
                        stor.push_back(x);
                        dir = false;
                        x++;
                    }
                    else
                    {
                        dir = true;
                        stor.push_back(y);
                        y--;
                    }
                }

                for (int k = stor.size() - 1; k >= 0; k--)
                {
                    cout << stor[k] << " ";
                }
            }
            cout << endl;
        }
    }
}

int main()
{
    // time_t start,end;
    // time(&start);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
    //     time(&end);
    //     double time_taken = double(end - start);
    //     cout << "Time taken by program is : " << fixed
    //          << time_taken << setprecision(5);
    //     cout << " sec " << endl;
}