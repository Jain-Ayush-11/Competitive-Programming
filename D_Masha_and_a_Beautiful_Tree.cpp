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
    vector<int> p(n);
    forn(i, n) cin>>p[i];
    if(n==1) { cout<<0<<endl; return; }
    int c=0;
    for(int i=0;i<n;i+=2){
        // cout<<i<<endl;
        if(abs(p[i]-p[i+1])!=1) { cout<<-1<<endl; return; }
        else if(p[i]>p[i+1]) swap(p[i], p[i+1]), c++;
        // i++;
    }
    // forn(i, n) cout<<p[i]<<" ";
    // cout<<endl;
    int j=4;
    while(j<=n){
        // cout<<c<<" ";
        vector<int> k=p; int x=0;
        while(x<n){
            sort(p.begin()+x, p.begin()+x+j);
            for(int i=1+x;i<x+j;i++) if(p[i]-p[i-1]!=1) { cout<<-1<<endl; return; }
            x+=j;
        }
        // forn(i, n) cout<<p[i]<<" ";
        // cout<<endl;
        for(int i=0;i<n;i+=j){
            if(p[i]!=k[i]) c++;
        }
        j=j*2;
    }
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