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

long long gcd(long long a, long long b)
{
    if (!a || !b)
        return a | b;

    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);

    do
    {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;

    } while (b);

    return a << shift;
}

map<long long, long long> fac(long long n)
{

    map<long long, long long> ans;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            ans[i]++;
            // ans.push_back(n/i);
            n /= i;
        }
    }
    if (n > 1)
        ans[n]++;

    return ans;
}

long long BE(long long a, long long b)
{
    long long ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = ans * a;
        }
        a = a * a;
        b >>= 1;
    }
    return ans;
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    string ans = "";
    int ctr = 0;
    vector<pair<int, int>> vp;
    for (int i = 0; i < s1.size(); i++)
    {
        string str;
        str.push_back(s1[i]);
        for (int j = i + 1; j < s1.size(); j++)
        {
            vp.push_back({i,j});
            str = str + s1[j];
            if (s2.find(str) != -1)
            {
                ans.push_back('*');
                for (int k = 0; k < str.size(); k++)
                {
                    ans.push_back(str[k]);
                }
                ans.push_back('*');
                ctr++;
                break;
            }
        }
        if (ctr > 0)
        {
            break;
        }
    }
    if (ctr > 0)
    {
        cout << "Yes" << endl;
        cout << ans<< endl;
    }
    else
    {
        if (s1[0] == s2[0])
        {
            cout << "Yes" << endl;
           
            cout << s1[0]<<"*" << endl;
        }
        else if (s1[s1.size() - 1] == s2[s2.size() - 1])
        {
            cout << "YES" << endl;
           
            cout << "*"<< s1[s1.size() - 1]<< endl;
        }
        else
        {
            cout << "No" << endl;
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