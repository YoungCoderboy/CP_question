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
bool is_sorted(vector<int> arr)
{
    bool flag = true;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
            flag = false;
    }
    return flag;
}
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        arr.push_back(x);
        mp[x] = i;
    }

    int mid1 = (n + 1) / 2, mid2 = (n + 2) / 2;
    int ind1 = mp[mid1], ind2 = mp[mid2];
    int ans = n / 2;

    if (is_sorted(arr))
    {
        cout << 0 << endl;
    }
    else
    {

        if (n % 2) // if N is odd then ind1==ind2
        {
            // mid1==mid2 say 5 checking 5>4 and 5<6
            if (mp[mid1 - 1] < ind1 && mp[mid1 + 1] > ind1)
            {
                mid1--;
                mid2++;
                ind1 = mp[mid1];
                ind2 = mp[mid2];
            }
            else
            {
                cout << ans << endl;
                return;
            }
        }
        int prev1 = ind1, prev2 = ind2;

        while ((ind1 <= prev1) && (prev2 <= ind2) && (prev1 < prev2))
        {
            prev1 = ind1;
            prev2 = ind2;

            mid1--;
            mid2++;

            ind1 = mp[mid1];
            ind2 = mp[mid2];

            ans--;

            if (mid1 == 0)
                break;
        }
        cout<<ans<<endl;
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