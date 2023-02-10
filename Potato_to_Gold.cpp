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
int MOD = 1e9 + 7;
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

void func(int i, vector<int> v, vector<int>& a, int& c, int& k){
    if(i==a.size()) { c=(c+1)%MOD; return; }
    func(i+1, v, a, c, k);
    if(v.size()<1) v.push_back(a[i]);
    else{
        forn(j, v.size()){
            if((v[j]+a[i])%k==0) return;
        }
        v.push_back(a[i]);
    }
    func(i+1, v, a, c, k);
}

void solve(){
    int n, k; cin>>n>>k;
    vector<int> a(n);
    forn(i, n) cin>>a[i];
    int c=0;
    func(0, vector<int>(0), a, c, k);
    cout<<c<<endl;
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