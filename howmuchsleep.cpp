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

    int n, H, M;
    cin >> n >> H >> M;
    int minmin = INT_MAX, minhr = INT_MAX, mini = INT_MAX;
    vector<pair<int, int>> pai;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        pai.push_back({x, y});
    }
    int ansmin = 0, anshr = 0;
    int minansmin=INT_MAX,minanshr=INT_MAX;
    for (int i = 0; i < pai.size(); ++i)
    {
        if (M > minmin)
        {
            ansmin = 60 - M + pai[i].second;
            pai[i].first--;
        }
        else
        {
            ansmin = pai[i].second - M;
        }
        
        if (H > minhr)
        {
            anshr = 24 + pai[i].first - H;
        }
        else
        {
            anshr = pai[i].first - H;
        }

        if(anshr==minanshr)
        {
            minansmin=min(ansmin,minansmin);


        }
        else if(anshr<minanshr)
        {
            minanshr=anshr;
            minansmin=ansmin;
        }


    }
    cout << minanshr << " " << minansmin << endl;
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
        cout << "Case #" << t << ": ";
        solve();
    }
}