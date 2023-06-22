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
#define f(x, y, z) for (long long int i = x; i < y; i += z)

const long long int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int i = 0, j = n - 1;

    long long int ans1[n];
    long long int ans2[n];
    bool first=true;
    for (long long int i = 0; i < n; i++)
    {
       if(first && arr[i]==0)
       {
         ans1[i]=1;
         first=false;
       }
       else
       {
          ans1[i]=arr[i];
       }
    }
    first=true;
    for (long long int i = n-1; i >=0; i--)
    {
       if(first && arr[i]==1)
       {
         ans2[i]=0;
         first=false;
       }
       else
       {
          ans2[i]=arr[i];
       }
    }

    long long int index1[n]={0},index2[n]={0};
    long long int index3[n]={0};
    long long int cnt=0;
    for (long long int i = n-1; i >=0; i--)
    {
       if(ans1[i]==1)
       {
         index1[i]=cnt;
       }
       else
       {
          cnt++;
       }
    }
    cnt=0;
    for (long long int i = n-1; i >=0; i--)
    {
       if(ans2[i]==1)
       {
         index2[i]=cnt;
       }
       else
       {
          cnt++;
       }
    }
    cnt=0;
    for (long long int i = n-1; i >=0; i--)
    {
       if(arr[i]==1)
       {
         index3[i]=cnt;
       }
       else
       {
          cnt++;
       }
    }


    long long int sum1=0,sum2=0,sum3=0;

    for(long long int i=0;i<n;i++)
    {
        sum1+=index1[i];
        sum2+=index2[i];
        sum3+=index3[i];
    }
    // for(long long int i=0;i<n;i++)
    // {
    //     cout<<ans1[i]<<" ";

    // }
    // cout<<endl;
    // for(long long int i=0;i<n;i++)
    // {
    //     cout<<ans2[i]<<" ";

    // }
    // cout<<endl;
    // for(long long int i=0;i<n;i++)
    // {
    //     cout<<index1[i]<<" ";

    // }
    // cout<<endl;
    // for(long long int i=0;i<n;i++)
    // {
    //     cout<<index2[i]<<" ";

    // }
    // cout<<endl;
   
    cout<<max(sum1,max(sum2,sum3))<<endl;
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