#include <bits/stdc++.h>
#include <iostream>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
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
#define from(n) for(int i=0;i<n;i++)


const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve()
{
    
  long long int n,m;
   cin>>n>>m;
  long long int arr[n];
   for(long long int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   long long  int arrup[n];
   long long int arrdown[n];
   for(long long int i=0;i<n;i++)
   {
    arrup[i]=0;
    arrdown[i]=0;
   }

   for(long long int i=1;i<n;i++)
   {
        if(arr[i]<=arr[i-1])
        arrup[i]=arr[i-1]-arr[i]+arrup[i-1];
        else
        arrup[i]=arrup[i-1];
        
   }
   long long int revarr[n]={0};
   for(long long int i=0;i<n;i++)
   {
        revarr[i]=arr[n-i-1];
   }
   for(long long int i=1;i<n;i++)
   {
        if(revarr[i]<=revarr[i-1])
        arrdown[i]=revarr[i-1]-revarr[i]+arrdown[i-1];
        else
        arrdown[i]=arrdown[i-1];
        
        

        
   } 
//    for(int i=0;i<n;i++)
//    cout<<arrdown[i]<<" ";

   while(m--)
   {
       long long int i,j;
       cin>>i>>j;
       if(j>=i)
       {
         cout<<arrup[j-1]-arrup[i-1]<<endl;
       }
       else
       {
        i=n-i+1;
        j=n-j+1;
        cout<<arrdown[j-1]-arrdown[i-1]<<endl;
       }
   }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}