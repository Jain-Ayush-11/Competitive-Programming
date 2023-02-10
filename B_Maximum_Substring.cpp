/*******************
    CodeForces:- Ayush_J 
    CodeChef:- stein_1103 
********************/
 
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long int
int MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(int i = 0; i < e; i++)
#define forsn(i,s,e) for(int i = s; i < e; i++)
#define rforn(i,s) for(int i = s; i >= 0; i--)
#define rforsn(i,s,e) for(int i = s; i >= e; i--)
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    if(a.second==b.second)
        return a.first<b.first;
    return (a.second < b.second);
}

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int c=1, o=0, z=0;
    vector<pair<int, int>> v;
    (s[0]=='1'?o++:z++);
    forsn(i, 1, n){
        if(s[i]!=s[i-1]) { v.push_back({c, (s[i-1]=='0'?0:1)}); c=1; }
        else c++;
        if(s[i]=='1') o++;
        else z++;
    }
    v.push_back({c, (s[n-1]=='0'?0:1)});
    int mx0=0, mx1=0;
    forn(i, v.size()){
        if(v[i].second==0) mx0=max(mx0, v[i].first);
        else mx1=max(mx1, v[i].first);
    }
    cout<<max(o*z, max(mx1*mx1, mx0*mx0))<<endl;
}

int32_t main()
{
    fast_cin();
    int t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}