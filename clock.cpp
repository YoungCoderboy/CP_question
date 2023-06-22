#include <bits/stdc++.h>
#include <iostream>
#include <string.h>

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
bool timeo(long long int t)
{
    switch (t)
    {
    case 0:
        return true;
        /* code */
        break;
    case 70:
        return true;
        /* code */
        break;
    case 140:
        return true;
        /* code */
        break;
    case 210:
        return true;
        /* code */
        break;
    case 280:
        return true;
        /* code */
        break;
    case 350:
        return true;
        /* code */
        break;
    case 601:
        return true;
        /* code */
        break;
    case 671:
        return true;
        /* code */
        break;
    case 741:
        return true;
        /* code */
        break;
    case 811:
        return true;
        /* code */
        break;
    case 881:
        return true;
        /* code */
        break;
    case 951:
        return true;
        /* code */
        break;
    case 1202:
        return true;
        /* code */
        break;
    case 1272:
        return true;
        /* code */
        break;
    case 1342:
        return true;
        /* code */
        break;
    case 1412:
        return true;
        /* code */
        break;
    
    
    }
    return false;

}


void solve()
{
    string s;
    int n;
    cin>>s;
    cin>>n;

    int hr=int(s[0]-'0')*10+int(s[1]-'0');
    int min=int(s[3]-'0')*10+int(s[4]-'0');
    // cout<<hr<<" "<<min<<endl;
    int cnt=0;
    int time=hr*60+min;
   
    int arr[1446]={0};

    for(int i=0;i<100000;i++)
    {
        if(timeo(time) && arr[time]==0 )
        {
            arr[time]=1;
            cnt++;
        }
        time+=n;
        time%=1440;
    }
    // cout<<endl;

    
    cout<<cnt<<endl;
  
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