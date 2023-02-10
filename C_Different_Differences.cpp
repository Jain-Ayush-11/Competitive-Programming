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
    int k, n; cin>>k>>n;
    int u=k;
    // if(k<(n&1?n/2+1:n/2)){
    //     int i=1, d=1;
    //     while(k--){
    //         cout<<i<<" ";
    //         i+=d;
    //         d++;
    //     } 
    // }
    // else{
    vector<int> a;
    int i=1, d=1;
    while(i<=n){
        a.push_back(i);
        i+=d;
        d++;
    }
    if(a.size()>=k){
        int i=0;
        while(k--) { cout<<a[i]<<" "; i++; }
    }
    else {
        int b=a[a.size()-1]+1;
        k-=a.size();
        while(b<=n && k) { a.push_back(b); b++; k--; }
        if(k==0){
            forn(i, a.size()) { cout<<a[i]<<" "; }
        }
        else {
            // cout<<1<<" ";
            vector<int> q;
            q.push_back(a[a.size()-1]);
            rforn(i, a.size()-2){
                if(a[i]!=a[i+1]-1 && k) {
                    q.push_back(--a[i+1]);
                    i++;
                    k--;
                }
                else q.push_back(a[i]);
            }
            rforn(i, q.size()-1) cout<<q[i]<<" ";
        }
    }
    cout<<endl;
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