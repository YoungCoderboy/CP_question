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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{

    long long int n, s;
    cin >> n >> s;
    int arr[n];
    long long int sum = s;
    vector<bool> vis(100000, false);

    int maxindex = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        vis[arr[i]] = true;
        maxindex = max(maxindex, arr[i]);
    }
    int i = 1;
    bool maybe = false;
    int ind = 0;

    while (s > 0 && i < 100000)
    {
        if (s == i && vis[i] == true)
        {
            maybe = false;
            break;
        }
        else if (vis[i] == true)
        {
            if (s == i)
            {
                maybe = false;
                break;
            }
            i++;
        }
        else if (s >= i)
        {
            maybe = true;
            s -= i;
            vis[i] = true;
            i++;
        }
        else
        {
            cout<<"No"<<endl;
            return;
            
        }
    }
    for (int j = 1; j < max(i - 1, maxindex); j++)
    {
        if (vis[j] != true)
            maybe = false;
    }
    if (maybe)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "NO" << endl;
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