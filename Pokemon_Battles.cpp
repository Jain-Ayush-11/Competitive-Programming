/*******************
    CodeForces:- Ayush_J 
    CodeChef:- stein_1103 
********************/
 
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
bool sortbysec(const pair<pair<int,int>, int> &a, const pair<pair<int,int>, int> &b)
{
    if(a.first.second==b.first.second)
        return a.first.first<b.first.first;
    return (a.first.second < b.first.second);
}

void solve(){
    int n; cin>>n;
    vector<pair<int, int>> v;
    vector<int> a(n), b(n);
    forn(i, n) cin>>a[i];
    forn(i, n) cin>>b[i];
    forn(i, n){
        v.pb(make_pair(a[i], b[i]));
    }
    vector<int> s(n);
    sort(v.begin(), v.end());
    int c=0;
    forn(i, n){
    }
    cout<<c<<endl;
}

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}