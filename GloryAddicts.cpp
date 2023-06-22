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
#define from(n) for (int i = 0; i < n; i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{

    int cnt0 = 0, cnt1 = 0;

    int n;
    cin >> n;

    vector<int> arr_0;
    vector<int> arr_1;
    vector<int> index;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        index.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (index[i] == 0)
        {
            cnt0++;
            arr_0.push_back(x);
        }
        else
        {
            cnt1++;
            arr_1.push_back(x);
        }
    }
    sort(arr_0.begin(), arr_0.end());
    sort(arr_1.begin(), arr_1.end());

    if (cnt0 == cnt1)
    {
       long long int sum1 = 0, sum2 = 0;
        for (int i = 0; i < arr_0.size(); i++)
        {
            sum1 += arr_0[i] * 2;
        }
        for (int i = 1; i < arr_1.size(); i++)
        {
            sum1 += arr_1[i] * 2;
        }
        sum1 += arr_1[0];

        for (int i = 0; i < arr_1.size(); i++)
        {
            sum2 += arr_1[i] * 2;
        }
        for (int i = 1; i < arr_0.size(); i++)
        {
            sum2 += arr_0[i] * 2;
        }
        sum2 += arr_0[0];

        cout << max(sum1, sum2) << endl;
    }
    else if (cnt0 > cnt1)
    {
        int way = cnt1 ;
        long long int sum = 0;
        for (int i = arr_0.size() - 1; i >= 0; i--)
        {
            if (way > 0)
            {
                sum += arr_0[i] * 2;
                way--;
            }
            else
            {
                sum += arr_0[i];
            }
        }
        for (int i = 0; i < arr_1.size(); ++i)
        {
            sum += arr_1[i] * 2;
        }
        cout << sum << endl;
    }
    else
    {

        int way = cnt0 ;
        long long int sum = 0;
        for (int i = arr_1.size() - 1; i >= 0; i--)
        {
            if (way > 0)
            {
                sum += arr_1[i] * 2;
                way--;
            }
            else
            {
                sum += arr_1[i];
            }
        }
        for (int i = 0; i < arr_0.size(); ++i)
        {
            sum += arr_0[i] * 2;
        }
        cout << sum << endl;
    }
}

int main()
{
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
}