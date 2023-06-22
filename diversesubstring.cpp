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
#define f(x,y,z) for (int i = x; i < y; i+=z)
#define E "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


long long gcd(long long a,long long b)
{
    if(!a||!b)
        return a|b;
    
    unsigned shift=__builtin_ctz(a|b);
    a>>=__builtin_ctz(a);

    do{
        b>>=__builtin_ctz(b);
        if(a>b)
            swap(a,b);
        b-=a;

    }while(b);

    return a<<shift;

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

void solve()
{
    
    int n;
    string s;
    cin>>n>>s;

    long long total=(n*(n+1))/2;
    bool arr[10]={false};

    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
        }
        else
        {
            total=total-cnt*(cnt+1)/2;
            cnt=0;
        }
        // cout<<total<<" +"<<endl;
        
    }
    total=total-cnt*(cnt+1)/2;

    int uniq=0;
    int maxi=1;
    int u=0;
    int num[10]={0};
    for(int i=0;i<n;i++)
    {
        if(arr[s[i]-'0']==false)
        {
            uniq++;
            
            arr[s[i]-'0']=true;
            num[s[i]-'0']++;
        }
        else
        {
            num[s[i]-'0']++;
            for(int j=0;j<10;j++)
                maxi=max(maxi,num[j]);
            
        }
        // cout<<" maxi , unique "<<maxi<<" "<<uniq<<endl;
        u=0;
        for(int j=0;j<10;j++)
        {
            if(arr[j]==true)
                u++;
        }
        // cout<<" maxi , unique "<<maxi<<" "<<uniq<<endl;
        if(maxi>uniq && u>0)
        {
            total--;
        }
        
    }
    for(int i=0;i<10;i++)
    {
        arr[i]=false;
        num[i]=0;
    }
    uniq=0;
    maxi=1;
    u=0;

    for(int i=n-1;i>0;i--)
    {
        if(arr[s[i]-'0']==false)
        {
            uniq++;
            
            arr[s[i]-'0']=true;
            num[s[i]-'0']++;
        }
        else
        {
            num[s[i]-'0']++;
            for(int j=0;j<10;j++)
                maxi=max(maxi,num[j]);
            
        }
        u=0;
        for(int j=0;j<10;j++)
        {
            if(arr[j]==true)
                u++;
        }
        // cout<<" maxi , unique "<<maxi<<" "<<uniq<<endl;
        if(maxi>uniq && u>0)
        {
            total--;
        }

    }
    cout<<total<<endl;
  

    
   
   
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