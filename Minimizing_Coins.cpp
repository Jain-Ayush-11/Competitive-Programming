/*******************
    CodeForces:- _Stein_ 
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

int ans=-1;

void solve(vector<int>& a, vector<int>& temp, int idx, int x){
    if(idx>a.size() || (temp.size()>=ans && ans!=-1)) return;
    if(idx==a.size()) {
        if(x==0) { ans=temp.size(); return; }
        return;
    }
    // int k=-1;
    if(a[idx]<=x) {
        temp.push_back(a[idx]);
        solve(a, temp, idx, x-a[idx]);
        temp.pop_back();
    }
    solve(a, temp, idx+1, x);
    // return (k!=-1?(t!=-1?min(k, t):k):t);
}

int32_t main()
{
    fast_cin();
    int n, x; cin>>n>>x;
    vector<int> a(n); forn(i, n) cin>>a[i];
    sort(a.rbegin(), a.rend());
    vector<int> temp;
    solve(a, temp, 0, x);
    cout<<ans;
    return 0;
}