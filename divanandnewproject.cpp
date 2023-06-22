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
#define sza(x) ((long long int)x.size())
#define all(a) (a).begin(), (a).end()
#define f(x,y,z) for (long long int i = x; i < y; i+=z)
#define E "\n"

const long long int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
bool sortByMe(const pair<long long int,long long int> &a, pair<long long int,long long int> &b)
{
    return (a.first>b.first);
}

void solve()
{
    long long int n;
    cin>>n;
    
    // long long int arr[n];
    vector<pair<long long int,long long int>>arr;
   
    for(long long int i=0;i<n;i++)
    {
       long long int x;
       cin>>x;
       arr.push_back({x,i});
    }
    sort(arr.begin(),arr.end(),sortByMe);
    // < coordinate  , value >
    vector<pair<long long int,pair<long long int,long long int>>> ans;

    long long int x=1,y=-1;
    bool sw=true;
    for(long long int i=0;i<n;i++)
    {
        if(sw)
        {
            ans.push_back({arr[i].second,{arr[i].first,x}});
            x++;
            sw=false;
        }
        else
        {
            ans.push_back({arr[i].second,{arr[i].first,y}});
           
            sw=true;
            y--;


        }

    }
    long long int time=0;
    
    for(long long int i=0;i<ans.size();i++)
    {
        time+=((abs(ans[i].second.second))*ans[i].second.first);

        // arr[mp[ans[i].second]]=ans[i].first;
    }
    sort(ans.begin(),ans.end());
    cout<<time*2<<endl;
    cout<<0<<" ";
    for(auto i:ans)
    {
        cout<<i.second.second<<" ";
    }
    cout<<endl;

   
   
}

int main()
{
    // time_t start,end;
    // time(&start);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int tc = 1;
    cin >> tc;
    for (long long int t = 1; t <= tc; t++)
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
// // 4
// 3
// 1 2 3
// 5
// 3 8 10 6 1
// 5
// 1 1 1 1 1
// 1
// 0
