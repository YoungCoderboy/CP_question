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

const int MAX = 1e7 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

bool v[MAX];
long long int len, sp[MAX];

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

    map<long long, long long> mp;
    long long int n;
    cin >> n;

    mp = fac(n);
    // long long mi=INT_MAX;
    vector<long long> mi;
    for (auto it : mp)
        mi.push_back(it.second);

    sort(mi.begin(), mi.end());
    long long ans=0;
    for (int i = 0; i < mi.size(); i++)
    {
        long long pro = 1;
        for (auto &it : mp)
        {
            if (it.second >= mi[i] && mi[i] !=0)
                pro *= it.first;
            it.second -= mi[i];
            
        }
        pro *= mi[i];
        for(int j=i+1;j<mi.size();j++)
        {
            mi[j]-=mi[i];

        }
        ans+=pro;
        // cout<<pro<<endl;
    }
    // for (auto &it : mp)
    // {
    //     ans += it.first * it.second;
    // }

    cout << ans << endl;
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