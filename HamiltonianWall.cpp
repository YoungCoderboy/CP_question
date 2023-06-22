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
#define end "\n"

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
void traverse(int row,int col,string s[2])
{


}

void solve()
{
    string s[2];
    int n;
    cin>>n>>s[0]>>s[1];
    // int i=0,j=0;
    // starting from s[0]
    int x,y;
    for(int i=0;i<n;i++)
    {
        if(s[0][i]=='B' && s[1][i]=='B')
        {
            continue;

        }
        else if(s[0][i]=='B')
        {
            x=0;
            y=i;
            break;

        }
        else if(s[1][i]=='B')
        {
            x=1;
            y=i;
            break;

        }

    }
    if(y==n-1)
    {
        cout<<"Yes"<<end;
        return;
    }
    while(y<n-1)
    {
        if(x==0)
        {
            if(s[0][y+1]=='B' && s[1][y]=='B')
            {
                s[x][y]='W';
                x=1;
            }
            else if(s[0][y+1]=='B')
            {
                s[x][y]='W';
                y++;
            }
            else if(s[1][y]=='B')
            {
                s[x][y]='W';
                x=1;
            }
            else
            {
                cout<<"No"<<end;
                return;
            }


        }
        else
        {

            if(s[1][y+1]=='B' && s[0][y]=='B')
            {
                s[x][y]='W';
                x=0;
            }
            else if(s[1][y+1]=='B')
            {
                s[x][y]='W';
                y++;
            }
            else if(s[0][y]=='B')
            {
                s[x][y]='W';
                x=0;
            }
            else
            {
                cout<<"No"<<end;
                return;
            }
        }
    }

        cout<<"Yes"<<end;


    
   
   
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