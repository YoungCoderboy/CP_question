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

bool sortbyCond(const pair<int, int> &a,
                const pair<int, int> &b)
{
    if (a.first == b.first)
        return (a.second > b.first);
    else
        return (a.first > b.first);
}
void solve()
{
    string s;
    cin >> s;

    vector<pair<char, int>> map;

    for (int i = 0; i < s.length(); i++)
    {
        map.push_back({s[i], i + 1});
    }

    if (s[0] <= s[s.length() - 1])
    {
        sort(map.begin(), map.end());
        // for(int i=0;i<s.length();i++)
        // {
        //     cout<<map[i].first<<" "<<map[i].second<<endl;
        // }
        // cout<<endl;
    }
    else
    {
        sort(map.begin(), map.end(), sortbyCond);
    }
    int i = 0;
    while (map[i].first != s[0])
    {
        i++;
    }
    int cnt = 0;
    int j = i;

    while (map[i].second <= s.length() && map[i].second != 0)
    {
        cnt++;
        if (map[i].second == s.length())
            break;
        i++;
    }

    cout << abs(int(s[0] - 'a' + 1) - int(s[s.length() - 1] - 'a' + 1)) << " " << cnt << endl;

    while (map[j].second <= s.length() && map[j].second != 0)
    {

        cout << map[j].second << " ";
        if (map[j].second == s.length())
            break;
        j++;
    }
    cout << E;
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