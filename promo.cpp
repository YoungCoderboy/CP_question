#include <bits/stdc++.h>
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

    int n, q;
    cin >> n >> q;
    int arr[n];
    long long int presum[n+10];
    from(n+10)
    presum[i]=0;

    from(n)
    {
        cin >> arr[i];
        
    }
    
    
    sort(arr, arr + n);
    from(n)
    presum[i+1]=presum[i]+arr[i];
    
    // from(n+1)
    // cout<<presum[i]<<endl;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        // int i=0;
        long long int ans = 0;
        // while(y--)
        // {
        //     ans+=arr[n-x+i];
        //     i++;
        // }
        ans=presum[n-x+y]-presum[n-x];

        cout << ans << endl;
        ans=0;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}